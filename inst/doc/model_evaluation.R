## ---- message=F, warning=FALSE------------------------------------------------
library(navigation)

## -----------------------------------------------------------------------------
data("lemniscate_traj_ned")
head(lemniscate_traj_ned)
traj <- make_trajectory(data = lemniscate_traj_ned, system = "ned")

## ----  fig.height=4, fig.align='center', fig.width=7--------------------------
# plot traj
plot(traj, n_split = 6)
plot(traj, threeD = TRUE)

## -----------------------------------------------------------------------------
timing <- make_timing(
  nav.start = 0, # time at which to begin filtering
  nav.end = 15,
  freq.imu = 100, # frequency of the IMU, can be slower wrt trajectory frequency
  freq.gps = 1, # GNSS frequency
  freq.baro = 1, # barometer frequency (to disable, put it very low, e.g. 1e-5)
  gps.out.start = 8 , # to simulate a GNSS outage, set a time before nav.end
  gps.out.end = 13
)

## -----------------------------------------------------------------------------
snsr.mdl <- list()

# this uses a model for noise data generation
acc.mdl <- WN(sigma2 = 5.989778e-05) + AR1(phi = 9.982454e-01, sigma2 = 1.848297e-10) + AR1(phi = 9.999121e-01, sigma2 = 2.435414e-11) + AR1(phi = 9.999998e-01, sigma2 = 1.026718e-12)

gyr.mdl <- WN(sigma2 = 1.503793e-06) + AR1(phi = 9.968999e-01, sigma2 = 2.428980e-11) + AR1(phi = 9.999001e-01, sigma2 = 1.238142e-12)
snsr.mdl$imu <- make_sensor(name = "imu", frequency = timing$freq.imu, error_model1 = acc.mdl, error_model2 = gyr.mdl)

# RTK-like GNSS
gps.mdl.pos.hor <- WN(sigma2 = 0.025^2)
gps.mdl.pos.ver <- WN(sigma2 = 0.05^2)
gps.mdl.vel.hor <- WN(sigma2 = 0.01^2)
gps.mdl.vel.ver <- WN(sigma2 = 0.02^2)
snsr.mdl$gps <- make_sensor(
  name = "gps",
  frequency = timing$freq.gps,
  error_model1 = gps.mdl.pos.hor,
  error_model2 = gps.mdl.pos.ver,
  error_model3 = gps.mdl.vel.hor,
  error_model4 = gps.mdl.vel.ver
)

# Barometer
baro.mdl <- WN(sigma2 = 0.5^2)
snsr.mdl$baro <- make_sensor(name = "baro", frequency = timing$freq.baro, error_model1 = baro.mdl)

## -----------------------------------------------------------------------------
KF.mdl <- list()

# make IMU sensor
KF.mdl$imu <- make_sensor(name = "imu", frequency = timing$freq.imu, error_model1 = acc.mdl, error_model2 = gyr.mdl)

KF.mdl$gps <- snsr.mdl$gps
KF.mdl$baro <- snsr.mdl$baro

## ---- message=FALSE, results='hide', eval=T-----------------------------------
num.runs <- 5 # number of Monte-Carlo simulations
res <- navigation(
  traj.ref = traj,
  timing = timing,
  snsr.mdl = snsr.mdl,
  KF.mdl = KF.mdl,
  num.runs = num.runs,
  noProgressBar = TRUE,
  PhiQ_method = "1", # order of the Taylor expansion of the matrix exponential used to compute Phi and Q matrices
  compute_PhiQ_each_n = 50, # compute new Phi and Q matrices every n IMU steps (execution time optimization)
  parallel.ncores = 1,
  P_subsampling = timing$freq.imu
) # keep one covariance every second

## ---- fig.height=5, fig.align='center', fig.width=8, eval=T-------------------
plot(res, plot3d = F, error_analysis = T)

## ---- message=FALSE, eval=T---------------------------------------------------
# mean position error
pe <- compute_mean_position_err(res, step = 25)

# mean orientation error
oe <- compute_mean_orientation_err(res, step = 25)

## ---- message=FALSE, results='hide',  eval=T----------------------------------
# NEES
nees <- compute_nees(res, idx = 1:6, step = 100)

# Empirical coverage
coverage <- compute_coverage(res, alpha = 0.7, step = 100, idx = 1:6)

## ----  fig.height=5, fig.align='center', fig.width=6, eval=T------------------
plot_imu_err_with_cov(res, error = FALSE)

## ----  fig.height=5, fig.align='center', fig.width=6, eval=T------------------
plot_nav_states_with_cov(res, idx = 1:5, error = TRUE)

plot(pe)
plot(oe)

## ----  fig.height=5, fig.align='center', fig.width=6, eval=T------------------
plot(nees)
plot(coverage)

