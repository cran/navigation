% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/print.trajectory.R
\name{print.trajectory}
\alias{print.trajectory}
\title{Print trajectory Objects}
\usage{
\method{print}{trajectory}(x, obs = 5L, ...)
}
\arguments{
\item{x}{A \code{trajectory} object.}

\item{obs}{A \code{integer} the specifies how many from the beginning and end of the data set to show.}

\item{...}{Further arguments passed to or from other methods.}
}
\value{
Print \code{trajectory} objects.
}
\description{
Pretty formatting for \code{trajectory} objects.
}
\examples{
n <- 100
dat <- cbind(
  seq(from = 0, to = 60 * 60, length.out = n),
  46.204391 * pi / 180 + cumsum(rnorm(n)) / 10^5,
  6.143158 * pi / 180 + cumsum(rnorm(n)) / 10^5,
  375 + cumsum(rnorm(n))
)
traj <- make_trajectory(data = dat, name = "My cool data")
traj
}
\author{
Stephane Guerrier, Mehran Khaghani, and Lionel Voirol
}
\keyword{internal}
