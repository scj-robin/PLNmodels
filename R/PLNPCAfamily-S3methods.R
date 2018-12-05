## =========================================================================================
##
## PUBLIC S3 METHODS FOR PLNPCAfamily
##
## =========================================================================================

## Auxiliary functions to check the given class of an objet
isPLNPCAfamily     <- function(Robject) {inherits(Robject, "PLNPCAfamily"    )}

#' Display the criteria associated with a collection of PLNPCA fits (a PLNPCAfamily)
#'
#' @name plot.PLNPCAfamily
#'
#' @param x an R6 object with class PLNfamily
#' @param criteria vector of characters. The criteria to plot in c("loglik", "BIC", "ICL", "R_squared").
#' Default is  c("loglik", "BIC", "ICL").
#' @param annotate logical: should the value of approximated R squared be added to the plot?
#' @param ... additional parameters for S3 compatibility. Not used
#'
#' @return Produces a plot  representing the evolution of the criteria of the different models considered,
#' highlighting the best model in terms of BIC and ICL.
#'
#' @export
plot.PLNPCAfamily <- function(x, criteria = c("loglik", "BIC", "ICL"), annotate = TRUE, ...) {
  stopifnot(isPLNfamily(x))
  x$plot(criteria, annotate)
}

#' @describeIn getModel Model extraction for PLNPCAfamily
#' @export
getModel.PLNPCAfamily <- function(Robject, var, index = NULL) {
  stopifnot(isPLNPCAfamily(Robject))
  Robject$getModel(var, index = NULL)
}

#' @describeIn getBestModel Model extraction for PLNPCAfamily
#' @export
getBestModel.PLNPCAfamily <- function(Robject, crit = c("ICL", "BIC", "R_squared"), ...) {
  stopifnot(isPLNPCAfamily(Robject))
  Robject$getBestModel(match.arg(crit))
}