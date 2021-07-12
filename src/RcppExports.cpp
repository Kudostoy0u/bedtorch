// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// c_read_tabix_table
void c_read_tabix_table(std::string file_path, StringVector regions, std::string output_file, std::string index_path, bool download_index);
RcppExport SEXP _bedtorch_c_read_tabix_table(SEXP file_pathSEXP, SEXP regionsSEXP, SEXP output_fileSEXP, SEXP index_pathSEXP, SEXP download_indexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    Rcpp::traits::input_parameter< StringVector >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_file(output_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type index_path(index_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type download_index(download_indexSEXP);
    c_read_tabix_table(file_path, regions, output_file, index_path, download_index);
    return R_NilValue;
END_RCPP
}
// c_rollmean
NumericVector c_rollmean(NumericVector x, int k, bool na_pad, bool na_rm, int align);
RcppExport SEXP _bedtorch_c_rollmean(SEXP xSEXP, SEXP kSEXP, SEXP na_padSEXP, SEXP na_rmSEXP, SEXP alignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type na_pad(na_padSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    Rcpp::traits::input_parameter< int >::type align(alignSEXP);
    rcpp_result_gen = Rcpp::wrap(c_rollmean(x, k, na_pad, na_rm, align));
    return rcpp_result_gen;
END_RCPP
}
// c_rollsum
NumericVector c_rollsum(NumericVector x, int k, bool na_pad, bool na_rm, int align);
RcppExport SEXP _bedtorch_c_rollsum(SEXP xSEXP, SEXP kSEXP, SEXP na_padSEXP, SEXP na_rmSEXP, SEXP alignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type na_pad(na_padSEXP);
    Rcpp::traits::input_parameter< bool >::type na_rm(na_rmSEXP);
    Rcpp::traits::input_parameter< int >::type align(alignSEXP);
    rcpp_result_gen = Rcpp::wrap(c_rollsum(x, k, na_pad, na_rm, align));
    return rcpp_result_gen;
END_RCPP
}
// bgzip
void bgzip(std::string input_file_path, std::string output_file_path, bool append);
RcppExport SEXP _bedtorch_bgzip(SEXP input_file_pathSEXP, SEXP output_file_pathSEXP, SEXP appendSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input_file_path(input_file_pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_file_path(output_file_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    bgzip(input_file_path, output_file_path, append);
    return R_NilValue;
END_RCPP
}
// build_tabix_index
void build_tabix_index(std::string file_path);
RcppExport SEXP _bedtorch_build_tabix_index(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    build_tabix_index(file_path);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bedtorch_c_read_tabix_table", (DL_FUNC) &_bedtorch_c_read_tabix_table, 5},
    {"_bedtorch_c_rollmean", (DL_FUNC) &_bedtorch_c_rollmean, 5},
    {"_bedtorch_c_rollsum", (DL_FUNC) &_bedtorch_c_rollsum, 5},
    {"_bedtorch_bgzip", (DL_FUNC) &_bedtorch_bgzip, 3},
    {"_bedtorch_build_tabix_index", (DL_FUNC) &_bedtorch_build_tabix_index, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bedtorch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
