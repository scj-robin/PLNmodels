context("basic-plots")

data("trichoptera")
counts     <- data.matrix(trichoptera$Abundance)
covariates <- trichoptera$Covariate
trichoptera <- prepare_data(counts, covariates)

models <- PLNPCA(Abundance ~ 1 + offset(log(Offset)), data = trichoptera)
myPCA <- getBestModel(models)

test_that("basic plots works", {
  # disp_hist_base <- function() hist(mtcars$disp)
  # vdiffr::expect_doppelganger("Base graphics histogram", disp_hist_base)

  # disp_hist_ggplot <- ggplot(mtcars, aes(disp)) + geom_histogram()
  # vdiffr::expect_doppelganger("ggplot2 histogram", disp_hist_ggplot)

  p <- plot(myPCA, plot = F)
  vdiffr::expect_doppelganger("pca_plot", function() plot(p))
})

# vdiffr::manage_cases(filter = "graphics")
