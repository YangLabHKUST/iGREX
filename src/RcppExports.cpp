// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lmm_pxem
RcppExport SEXP lmm_pxem(const arma::vec y, const arma::mat X, const arma::mat W, const double tol, const int maxIter);
RcppExport SEXP _iGREX_lmm_pxem(SEXP ySEXP, SEXP XSEXP, SEXP WSEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(lmm_pxem(y, X, W, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// iGREX_Kg
RcppExport SEXP iGREX_Kg(const arma::vec& y, const arma::mat& X1, const arma::mat& X2, const arma::mat& W1, const double tol, const int maxIter);
RcppExport SEXP _iGREX_iGREX_Kg(SEXP ySEXP, SEXP X1SEXP, SEXP X2SEXP, SEXP W1SEXP, SEXP tolSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X1(X1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X2(X2SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W1(W1SEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(iGREX_Kg(y, X1, X2, W1, tol, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// iGREX_raw
RcppExport SEXP iGREX_raw(std::string prefix_eQTL_geno, std::string prefix_GWAS, std::string gene_expr, std::string cov_eQTL, std::string cov_GWAS, int whCol, int bw, int subsample);
RcppExport SEXP _iGREX_iGREX_raw(SEXP prefix_eQTL_genoSEXP, SEXP prefix_GWASSEXP, SEXP gene_exprSEXP, SEXP cov_eQTLSEXP, SEXP cov_GWASSEXP, SEXP whColSEXP, SEXP bwSEXP, SEXP subsampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type prefix_eQTL_geno(prefix_eQTL_genoSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_GWAS(prefix_GWASSEXP);
    Rcpp::traits::input_parameter< std::string >::type gene_expr(gene_exprSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_eQTL(cov_eQTLSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_GWAS(cov_GWASSEXP);
    Rcpp::traits::input_parameter< int >::type whCol(whColSEXP);
    Rcpp::traits::input_parameter< int >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type subsample(subsampleSEXP);
    rcpp_result_gen = Rcpp::wrap(iGREX_raw(prefix_eQTL_geno, prefix_GWAS, gene_expr, cov_eQTL, cov_GWAS, whCol, bw, subsample));
    return rcpp_result_gen;
END_RCPP
}
// iGREX_init
RcppExport SEXP iGREX_init(std::string prefix_eQTL_geno, std::string prefix_GWAS, std::string gene_expr, std::string cov_eQTL, std::string cov_GWAS, std::string trans_eQTL, int whCol, int bw, int subsample);
RcppExport SEXP _iGREX_iGREX_init(SEXP prefix_eQTL_genoSEXP, SEXP prefix_GWASSEXP, SEXP gene_exprSEXP, SEXP cov_eQTLSEXP, SEXP cov_GWASSEXP, SEXP trans_eQTLSEXP, SEXP whColSEXP, SEXP bwSEXP, SEXP subsampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type prefix_eQTL_geno(prefix_eQTL_genoSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_GWAS(prefix_GWASSEXP);
    Rcpp::traits::input_parameter< std::string >::type gene_expr(gene_exprSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_eQTL(cov_eQTLSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_GWAS(cov_GWASSEXP);
    Rcpp::traits::input_parameter< std::string >::type trans_eQTL(trans_eQTLSEXP);
    Rcpp::traits::input_parameter< int >::type whCol(whColSEXP);
    Rcpp::traits::input_parameter< int >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< int >::type subsample(subsampleSEXP);
    rcpp_result_gen = Rcpp::wrap(iGREX_init(prefix_eQTL_geno, prefix_GWAS, gene_expr, cov_eQTL, cov_GWAS, trans_eQTL, whCol, bw, subsample));
    return rcpp_result_gen;
END_RCPP
}
// iGREXs_init
RcppExport SEXP iGREXs_init(std::string prefix_eQTL_geno, std::string prefix_GWAS, std::string gene_expr, std::string Z_score, std::string cov_eQTL, std::string cov_GWAS, std::string trans_eQTL, int bw);
RcppExport SEXP _iGREX_iGREXs_init(SEXP prefix_eQTL_genoSEXP, SEXP prefix_GWASSEXP, SEXP gene_exprSEXP, SEXP Z_scoreSEXP, SEXP cov_eQTLSEXP, SEXP cov_GWASSEXP, SEXP trans_eQTLSEXP, SEXP bwSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type prefix_eQTL_geno(prefix_eQTL_genoSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_GWAS(prefix_GWASSEXP);
    Rcpp::traits::input_parameter< std::string >::type gene_expr(gene_exprSEXP);
    Rcpp::traits::input_parameter< std::string >::type Z_score(Z_scoreSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_eQTL(cov_eQTLSEXP);
    Rcpp::traits::input_parameter< std::string >::type cov_GWAS(cov_GWASSEXP);
    Rcpp::traits::input_parameter< std::string >::type trans_eQTL(trans_eQTLSEXP);
    Rcpp::traits::input_parameter< int >::type bw(bwSEXP);
    rcpp_result_gen = Rcpp::wrap(iGREXs_init(prefix_eQTL_geno, prefix_GWAS, gene_expr, Z_score, cov_eQTL, cov_GWAS, trans_eQTL, bw));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_iGREX_lmm_pxem", (DL_FUNC) &_iGREX_lmm_pxem, 5},
    {"_iGREX_iGREX_Kg", (DL_FUNC) &_iGREX_iGREX_Kg, 6},
    {"_iGREX_iGREX_raw", (DL_FUNC) &_iGREX_iGREX_raw, 8},
    {"_iGREX_iGREX_init", (DL_FUNC) &_iGREX_iGREX_init, 9},
    {"_iGREX_iGREXs_init", (DL_FUNC) &_iGREX_iGREXs_init, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_iGREX(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
