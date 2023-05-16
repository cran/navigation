// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cnstr_e_acc_cpp
arma::vec cnstr_e_acc_cpp(const arma::vec& X, const arma::mat& noise_info);
RcppExport SEXP _navigation_cnstr_e_acc_cpp(SEXP XSEXP, SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(cnstr_e_acc_cpp(X, noise_info));
    return rcpp_result_gen;
END_RCPP
}
// cnstr_e_gyr_cpp
arma::vec cnstr_e_gyr_cpp(const arma::vec& X, const arma::mat& noise_info);
RcppExport SEXP _navigation_cnstr_e_gyr_cpp(SEXP XSEXP, SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(cnstr_e_gyr_cpp(X, noise_info));
    return rcpp_result_gen;
END_RCPP
}
// pred_PhiQ_cpp
List pred_PhiQ_cpp(const arma::mat& Fmat, const arma::mat& Gmat, const arma::mat& Wmat, double dt, String method);
RcppExport SEXP _navigation_pred_PhiQ_cpp(SEXP FmatSEXP, SEXP GmatSEXP, SEXP WmatSEXP, SEXP dtSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Fmat(FmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gmat(GmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wmat(WmatSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_PhiQ_cpp(Fmat, Gmat, Wmat, dt, method));
    return rcpp_result_gen;
END_RCPP
}
// isNumber
bool isNumber(const std::string& str);
RcppExport SEXP _navigation_isNumber(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(isNumber(str));
    return rcpp_result_gen;
END_RCPP
}
// pred_PhiQ_cpp_2
List pred_PhiQ_cpp_2(const arma::mat& Fmat, const arma::mat& Gmat, const arma::mat& Wmat, double dt, std::string method);
RcppExport SEXP _navigation_pred_PhiQ_cpp_2(SEXP FmatSEXP, SEXP GmatSEXP, SEXP WmatSEXP, SEXP dtSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Fmat(FmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Gmat(GmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wmat(WmatSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_PhiQ_cpp_2(Fmat, Gmat, Wmat, dt, method));
    return rcpp_result_gen;
END_RCPP
}
// test_mat
arma::mat test_mat(const arma::mat& Fmat, double dt);
RcppExport SEXP _navigation_test_mat(SEXP FmatSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Fmat(FmatSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(test_mat(Fmat, dt));
    return rcpp_result_gen;
END_RCPP
}
// pred_Xe_cpp
arma::vec pred_Xe_cpp(const arma::vec& X_k, const arma::mat& noise_info, double dt);
RcppExport SEXP _navigation_pred_Xe_cpp(SEXP X_kSEXP, SEXP noise_infoSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X_k(X_kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_Xe_cpp(X_k, noise_info, dt));
    return rcpp_result_gen;
END_RCPP
}
// pred_Xn_cpp
arma::vec pred_Xn_cpp(const arma::vec& X_k, const arma::vec& imu_data, const arma::mat& noise_info, double dt, double g);
RcppExport SEXP _navigation_pred_Xn_cpp(SEXP X_kSEXP, SEXP imu_dataSEXP, SEXP noise_infoSEXP, SEXP dtSEXP, SEXP gSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X_k(X_kSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type imu_data(imu_dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    rcpp_result_gen = Rcpp::wrap(pred_Xn_cpp(X_k, imu_data, noise_info, dt, g));
    return rcpp_result_gen;
END_RCPP
}
// EKF_pred_cpp
List EKF_pred_cpp(const arma::vec& X_k, const arma::mat& P_k, const arma::mat& Fee, const arma::mat& Wmat, const arma::vec imu_data, const arma::mat& noise_info, double dt, double g, String method);
RcppExport SEXP _navigation_EKF_pred_cpp(SEXP X_kSEXP, SEXP P_kSEXP, SEXP FeeSEXP, SEXP WmatSEXP, SEXP imu_dataSEXP, SEXP noise_infoSEXP, SEXP dtSEXP, SEXP gSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X_k(X_kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type P_k(P_kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fee(FeeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wmat(WmatSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type imu_data(imu_dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(EKF_pred_cpp(X_k, P_k, Fee, Wmat, imu_data, noise_info, dt, g, method));
    return rcpp_result_gen;
END_RCPP
}
// EKF_pred_cpp_PhiQ_provided
List EKF_pred_cpp_PhiQ_provided(const arma::vec& X_k, const arma::mat& P_k, const arma::mat& Fee, const arma::mat& Wmat, const arma::vec imu_data, const arma::mat& noise_info, double dt, double g, const arma::mat& last_Phi, const arma::mat& last_Q);
RcppExport SEXP _navigation_EKF_pred_cpp_PhiQ_provided(SEXP X_kSEXP, SEXP P_kSEXP, SEXP FeeSEXP, SEXP WmatSEXP, SEXP imu_dataSEXP, SEXP noise_infoSEXP, SEXP dtSEXP, SEXP gSEXP, SEXP last_PhiSEXP, SEXP last_QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X_k(X_kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type P_k(P_kSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fee(FeeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Wmat(WmatSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type imu_data(imu_dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type last_Phi(last_PhiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type last_Q(last_QSEXP);
    rcpp_result_gen = Rcpp::wrap(EKF_pred_cpp_PhiQ_provided(X_k, P_k, Fee, Wmat, imu_data, noise_info, dt, g, last_Phi, last_Q));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Fnn_cpp
arma::mat KF_mat_Fnn_cpp(const arma::vec& X, const arma::vec& imu_data, const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Fnn_cpp(SEXP XSEXP, SEXP imu_dataSEXP, SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type imu_data(imu_dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Fnn_cpp(X, imu_data, noise_info));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Fee_cpp
arma::mat KF_mat_Fee_cpp(const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Fee_cpp(SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Fee_cpp(noise_info));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Fne_cpp
arma::mat KF_mat_Fne_cpp(const arma::vec& X, const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Fne_cpp(SEXP XSEXP, SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Fne_cpp(X, noise_info));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Fen_cpp
arma::mat KF_mat_Fen_cpp(const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Fen_cpp(SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Fen_cpp(noise_info));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Fmat_cpp
arma::mat KF_mat_Fmat_cpp(const arma::vec X, const arma::vec imu_data, const arma::mat& noise_info, const arma::mat& Fee);
RcppExport SEXP _navigation_KF_mat_Fmat_cpp(SEXP XSEXP, SEXP imu_dataSEXP, SEXP noise_infoSEXP, SEXP FeeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type imu_data(imu_dataSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fee(FeeSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Fmat_cpp(X, imu_data, noise_info, Fee));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Gmat_cpp
arma::mat KF_mat_Gmat_cpp(const arma::vec X, const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Gmat_cpp(SEXP XSEXP, SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Gmat_cpp(X, noise_info));
    return rcpp_result_gen;
END_RCPP
}
// KF_mat_Wmat_cpp
arma::mat KF_mat_Wmat_cpp(const arma::mat& noise_info);
RcppExport SEXP _navigation_KF_mat_Wmat_cpp(SEXP noise_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type noise_info(noise_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(KF_mat_Wmat_cpp(noise_info));
    return rcpp_result_gen;
END_RCPP
}
// rot_C1_cpp
arma::mat rot_C1_cpp(double r);
RcppExport SEXP _navigation_rot_C1_cpp(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_C1_cpp(r));
    return rcpp_result_gen;
END_RCPP
}
// rot_C2_cpp
arma::mat rot_C2_cpp(double p);
RcppExport SEXP _navigation_rot_C2_cpp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_C2_cpp(p));
    return rcpp_result_gen;
END_RCPP
}
// rot_C3_cpp
arma::mat rot_C3_cpp(double y);
RcppExport SEXP _navigation_rot_C3_cpp(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_C3_cpp(y));
    return rcpp_result_gen;
END_RCPP
}
// rot_C_i_b_cpp
arma::mat rot_C_i_b_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_C_i_b_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_C_i_b_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_C_b_i_cpp
arma::mat rot_C_b_i_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_C_b_i_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_C_b_i_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC1_dr_cpp
arma::mat rot_dC1_dr_cpp(double r);
RcppExport SEXP _navigation_rot_dC1_dr_cpp(SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC1_dr_cpp(r));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC2_dp_cpp
arma::mat rot_dC2_dp_cpp(double p);
RcppExport SEXP _navigation_rot_dC2_dp_cpp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC2_dp_cpp(p));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC3_dy_cpp
arma::mat rot_dC3_dy_cpp(double y);
RcppExport SEXP _navigation_rot_dC3_dy_cpp(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC3_dy_cpp(y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_i_b_dr_cpp
arma::mat rot_dC_i_b_dr_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_i_b_dr_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_i_b_dr_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_i_b_dp_cpp
arma::mat rot_dC_i_b_dp_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_i_b_dp_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_i_b_dp_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_i_b_dy_cpp
arma::mat rot_dC_i_b_dy_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_i_b_dy_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_i_b_dy_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_b_i_dr_cpp
arma::mat rot_dC_b_i_dr_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_b_i_dr_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_b_i_dr_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_b_i_dp_cpp
arma::mat rot_dC_b_i_dp_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_b_i_dp_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_b_i_dp_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_dC_b_i_dy_cpp
arma::mat rot_dC_b_i_dy_cpp(double r, double p, double y);
RcppExport SEXP _navigation_rot_dC_b_i_dy_cpp(SEXP rSEXP, SEXP pSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dC_b_i_dy_cpp(r, p, y));
    return rcpp_result_gen;
END_RCPP
}
// rot_Cw_cpp
arma::mat rot_Cw_cpp(double r, double p);
RcppExport SEXP _navigation_rot_Cw_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_Cw_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}
// rot_dCw_dr_cpp
arma::mat rot_dCw_dr_cpp(double r, double p);
RcppExport SEXP _navigation_rot_dCw_dr_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dCw_dr_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}
// rot_dCw_dp_cpp
arma::mat rot_dCw_dp_cpp(double r, double p);
RcppExport SEXP _navigation_rot_dCw_dp_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dCw_dp_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}
// rot_Cw_inv_cpp
arma::mat rot_Cw_inv_cpp(double r, double p);
RcppExport SEXP _navigation_rot_Cw_inv_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_Cw_inv_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}
// rot_dCw_inv_dr_cpp
arma::mat rot_dCw_inv_dr_cpp(double r, double p);
RcppExport SEXP _navigation_rot_dCw_inv_dr_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dCw_inv_dr_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}
// rot_dCw_inv_dp_cpp
arma::mat rot_dCw_inv_dp_cpp(double r, double p);
RcppExport SEXP _navigation_rot_dCw_inv_dp_cpp(SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(rot_dCw_inv_dp_cpp(r, p));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_navigation_cnstr_e_acc_cpp", (DL_FUNC) &_navigation_cnstr_e_acc_cpp, 2},
    {"_navigation_cnstr_e_gyr_cpp", (DL_FUNC) &_navigation_cnstr_e_gyr_cpp, 2},
    {"_navigation_pred_PhiQ_cpp", (DL_FUNC) &_navigation_pred_PhiQ_cpp, 5},
    {"_navigation_isNumber", (DL_FUNC) &_navigation_isNumber, 1},
    {"_navigation_pred_PhiQ_cpp_2", (DL_FUNC) &_navigation_pred_PhiQ_cpp_2, 5},
    {"_navigation_test_mat", (DL_FUNC) &_navigation_test_mat, 2},
    {"_navigation_pred_Xe_cpp", (DL_FUNC) &_navigation_pred_Xe_cpp, 3},
    {"_navigation_pred_Xn_cpp", (DL_FUNC) &_navigation_pred_Xn_cpp, 5},
    {"_navigation_EKF_pred_cpp", (DL_FUNC) &_navigation_EKF_pred_cpp, 9},
    {"_navigation_EKF_pred_cpp_PhiQ_provided", (DL_FUNC) &_navigation_EKF_pred_cpp_PhiQ_provided, 10},
    {"_navigation_KF_mat_Fnn_cpp", (DL_FUNC) &_navigation_KF_mat_Fnn_cpp, 3},
    {"_navigation_KF_mat_Fee_cpp", (DL_FUNC) &_navigation_KF_mat_Fee_cpp, 1},
    {"_navigation_KF_mat_Fne_cpp", (DL_FUNC) &_navigation_KF_mat_Fne_cpp, 2},
    {"_navigation_KF_mat_Fen_cpp", (DL_FUNC) &_navigation_KF_mat_Fen_cpp, 1},
    {"_navigation_KF_mat_Fmat_cpp", (DL_FUNC) &_navigation_KF_mat_Fmat_cpp, 4},
    {"_navigation_KF_mat_Gmat_cpp", (DL_FUNC) &_navigation_KF_mat_Gmat_cpp, 2},
    {"_navigation_KF_mat_Wmat_cpp", (DL_FUNC) &_navigation_KF_mat_Wmat_cpp, 1},
    {"_navigation_rot_C1_cpp", (DL_FUNC) &_navigation_rot_C1_cpp, 1},
    {"_navigation_rot_C2_cpp", (DL_FUNC) &_navigation_rot_C2_cpp, 1},
    {"_navigation_rot_C3_cpp", (DL_FUNC) &_navigation_rot_C3_cpp, 1},
    {"_navigation_rot_C_i_b_cpp", (DL_FUNC) &_navigation_rot_C_i_b_cpp, 3},
    {"_navigation_rot_C_b_i_cpp", (DL_FUNC) &_navigation_rot_C_b_i_cpp, 3},
    {"_navigation_rot_dC1_dr_cpp", (DL_FUNC) &_navigation_rot_dC1_dr_cpp, 1},
    {"_navigation_rot_dC2_dp_cpp", (DL_FUNC) &_navigation_rot_dC2_dp_cpp, 1},
    {"_navigation_rot_dC3_dy_cpp", (DL_FUNC) &_navigation_rot_dC3_dy_cpp, 1},
    {"_navigation_rot_dC_i_b_dr_cpp", (DL_FUNC) &_navigation_rot_dC_i_b_dr_cpp, 3},
    {"_navigation_rot_dC_i_b_dp_cpp", (DL_FUNC) &_navigation_rot_dC_i_b_dp_cpp, 3},
    {"_navigation_rot_dC_i_b_dy_cpp", (DL_FUNC) &_navigation_rot_dC_i_b_dy_cpp, 3},
    {"_navigation_rot_dC_b_i_dr_cpp", (DL_FUNC) &_navigation_rot_dC_b_i_dr_cpp, 3},
    {"_navigation_rot_dC_b_i_dp_cpp", (DL_FUNC) &_navigation_rot_dC_b_i_dp_cpp, 3},
    {"_navigation_rot_dC_b_i_dy_cpp", (DL_FUNC) &_navigation_rot_dC_b_i_dy_cpp, 3},
    {"_navigation_rot_Cw_cpp", (DL_FUNC) &_navigation_rot_Cw_cpp, 2},
    {"_navigation_rot_dCw_dr_cpp", (DL_FUNC) &_navigation_rot_dCw_dr_cpp, 2},
    {"_navigation_rot_dCw_dp_cpp", (DL_FUNC) &_navigation_rot_dCw_dp_cpp, 2},
    {"_navigation_rot_Cw_inv_cpp", (DL_FUNC) &_navigation_rot_Cw_inv_cpp, 2},
    {"_navigation_rot_dCw_inv_dr_cpp", (DL_FUNC) &_navigation_rot_dCw_inv_dr_cpp, 2},
    {"_navigation_rot_dCw_inv_dp_cpp", (DL_FUNC) &_navigation_rot_dCw_inv_dp_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_navigation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
