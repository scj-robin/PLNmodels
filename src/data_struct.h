#ifndef _data_struct_H
#define _data_struct_H

#include <RcppArmadillo.h>

inline arma::mat logfact(arma::mat Y) {
  arma::mat v = Y.replace(0, 1);
  return sum(v % arma::log(v) - v + arma::log(8*pow(v,3) + 4*pow(v, 2) + v + 1/30)/6 + std::log(M_PI)/2, 1);
}

typedef std::vector<double> stdvec;

typedef struct optim_data {
    arma::mat Y          ;
    arma::mat X          ;
    arma::mat O          ;
    arma::vec w          ;
    arma::mat Omega      ;
    arma::mat Theta      ;
    double w_bar         ;
    double log_det_Omega ;
    arma::vec Ki         ;
    double KY            ;
    arma::vec KYi        ;
    int iterations       ;
    int n                ;
    int p                ;
    int d                ;
    int q                ;

    // constructors

    // Empty constructor
    optim_data() { } ;

    // PLN constructor
    optim_data(const arma::mat &responses,
               const arma::mat &covariates,
               const arma::mat &offsets,
               const arma::mat &weights,
               const arma::mat &regression_parameters,
               const arma::mat &covinv
    ) : Y(responses), X(covariates), O(offsets), w(weights), Omega(covinv), Theta(regression_parameters)
      {
        n = Y.n_rows ;
        p = Y.n_cols ;
        d = X.n_cols ;
        iterations = 0     ;
        KYi = logfact(Y)   ;
        KY = accu(w % KYi) ;
        w_bar = accu(w)    ;
        log_det_Omega = real(log_det(Omega)) ;
        Ki = - logfact(Y) + .5 * (1+(1-p)* std::log(2*M_PI)) ;
      } ;
    // Rank-Constrained constructor
    optim_data(const arma::mat &responses,
               const arma::mat &covariates,
               const arma::mat &offsets,
               const arma::mat &weights,
               const int rank
    ) : Y(responses), X(covariates), O(offsets), w(weights), q(rank)
      {
        n = Y.n_rows ;
        p = Y.n_cols ;
        d = X.n_cols ;
        iterations = 0 ;
        KYi = logfact(Y) ;
        KY = accu(KYi) ;
        w_bar = accu(w)    ;
      } ;

} optim_data ;

#endif
