// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fn_optim_PLN_par2_Cpp
Rcpp::List fn_optim_PLN_par2_Cpp(arma::vec par, const arma::mat Y, const arma::mat ProjOrthX, const arma::mat O, double KY);
RcppExport SEXP _PLNmodels_fn_optim_PLN_par2_Cpp(SEXP parSEXP, SEXP YSEXP, SEXP ProjOrthXSEXP, SEXP OSEXP, SEXP KYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ProjOrthX(ProjOrthXSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    rcpp_result_gen = Rcpp::wrap(fn_optim_PLN_par2_Cpp(par, Y, ProjOrthX, O, KY));
    return rcpp_result_gen;
END_RCPP
}
// fn_optim_PLN_par1_Cpp
Rcpp::List fn_optim_PLN_par1_Cpp(arma::vec par, const arma::mat Y, const arma::mat X, const arma::mat O, double KY);
RcppExport SEXP _PLNmodels_fn_optim_PLN_par1_Cpp(SEXP parSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP KYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    rcpp_result_gen = Rcpp::wrap(fn_optim_PLN_par1_Cpp(par, Y, X, O, KY));
    return rcpp_result_gen;
END_RCPP
}
// optim_PLN_MMA
Rcpp::List optim_PLN_MMA(arma::vec par, const arma::mat Y, const arma::mat X, const arma::mat O, double KY, Rcpp::List control);
RcppExport SEXP _PLNmodels_optim_PLN_MMA(SEXP parSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP KYSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(optim_PLN_MMA(par, Y, X, O, KY, control));
    return rcpp_result_gen;
END_RCPP
}
// fn_optim_PLNnetwork_new_Cpp
Rcpp::List fn_optim_PLNnetwork_new_Cpp(arma::vec par, double log_detOmega, const arma::mat Omega, const arma::mat Y, const arma::mat ProjOrthX, const arma::mat O, double KY);
RcppExport SEXP _PLNmodels_fn_optim_PLNnetwork_new_Cpp(SEXP parSEXP, SEXP log_detOmegaSEXP, SEXP OmegaSEXP, SEXP YSEXP, SEXP ProjOrthXSEXP, SEXP OSEXP, SEXP KYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< double >::type log_detOmega(log_detOmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type ProjOrthX(ProjOrthXSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    rcpp_result_gen = Rcpp::wrap(fn_optim_PLNnetwork_new_Cpp(par, log_detOmega, Omega, Y, ProjOrthX, O, KY));
    return rcpp_result_gen;
END_RCPP
}
// fn_optim_PLNnetwork_Cpp
Rcpp::List fn_optim_PLNnetwork_Cpp(arma::vec par, double log_detOmega, const arma::mat Omega, const arma::mat Y, const arma::mat X, const arma::mat O, double KY);
RcppExport SEXP _PLNmodels_fn_optim_PLNnetwork_Cpp(SEXP parSEXP, SEXP log_detOmegaSEXP, SEXP OmegaSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP KYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< double >::type log_detOmega(log_detOmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    rcpp_result_gen = Rcpp::wrap(fn_optim_PLNnetwork_Cpp(par, log_detOmega, Omega, Y, X, O, KY));
    return rcpp_result_gen;
END_RCPP
}
// fn_optim_PLNPCA_Cpp
Rcpp::List fn_optim_PLNPCA_Cpp(arma::vec par, int q, const arma::mat Y, const arma::mat X, const arma::mat O, double KY);
RcppExport SEXP _PLNmodels_fn_optim_PLNPCA_Cpp(SEXP parSEXP, SEXP qSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP KYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type O(OSEXP);
    Rcpp::traits::input_parameter< double >::type KY(KYSEXP);
    rcpp_result_gen = Rcpp::wrap(fn_optim_PLNPCA_Cpp(par, q, Y, X, O, KY));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PLNmodels_fn_optim_PLN_par2_Cpp", (DL_FUNC) &_PLNmodels_fn_optim_PLN_par2_Cpp, 5},
    {"_PLNmodels_fn_optim_PLN_par1_Cpp", (DL_FUNC) &_PLNmodels_fn_optim_PLN_par1_Cpp, 5},
    {"_PLNmodels_optim_PLN_MMA", (DL_FUNC) &_PLNmodels_optim_PLN_MMA, 6},
    {"_PLNmodels_fn_optim_PLNnetwork_new_Cpp", (DL_FUNC) &_PLNmodels_fn_optim_PLNnetwork_new_Cpp, 7},
    {"_PLNmodels_fn_optim_PLNnetwork_Cpp", (DL_FUNC) &_PLNmodels_fn_optim_PLNnetwork_Cpp, 7},
    {"_PLNmodels_fn_optim_PLNPCA_Cpp", (DL_FUNC) &_PLNmodels_fn_optim_PLNPCA_Cpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_PLNmodels(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
