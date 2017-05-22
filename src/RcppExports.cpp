// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// computeWin
List computeWin(IntegerVector covPosLen, IntegerVector covPosVal, IntegerVector covNegLen, IntegerVector covNegVal, double readLength, int end, int win, int step, int minCov, int maxCov, double logitThreshold);
RcppExport SEXP rnaCleanR_computeWin(SEXP covPosLenSEXP, SEXP covPosValSEXP, SEXP covNegLenSEXP, SEXP covNegValSEXP, SEXP readLengthSEXP, SEXP endSEXP, SEXP winSEXP, SEXP stepSEXP, SEXP minCovSEXP, SEXP maxCovSEXP, SEXP logitThresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type covPosLen(covPosLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covPosVal(covPosValSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegLen(covNegLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegVal(covNegValSEXP);
    Rcpp::traits::input_parameter< double >::type readLength(readLengthSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type win(winSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type minCov(minCovSEXP);
    Rcpp::traits::input_parameter< int >::type maxCov(maxCovSEXP);
    Rcpp::traits::input_parameter< double >::type logitThreshold(logitThresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(computeWin(covPosLen, covPosVal, covNegLen, covNegVal, readLength, end, win, step, minCov, maxCov, logitThreshold));
    return rcpp_result_gen;
END_RCPP
}
// computeWinInfo
List computeWinInfo(IntegerVector covPosLen, IntegerVector covPosVal, IntegerVector covNegLen, IntegerVector covNegVal, double readLength, int end, int win, int step);
RcppExport SEXP rnaCleanR_computeWinInfo(SEXP covPosLenSEXP, SEXP covPosValSEXP, SEXP covNegLenSEXP, SEXP covNegValSEXP, SEXP readLengthSEXP, SEXP endSEXP, SEXP winSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type covPosLen(covPosLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covPosVal(covPosValSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegLen(covNegLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegVal(covNegValSEXP);
    Rcpp::traits::input_parameter< double >::type readLength(readLengthSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type win(winSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(computeWinInfo(covPosLen, covPosVal, covNegLen, covNegVal, readLength, end, win, step));
    return rcpp_result_gen;
END_RCPP
}
// computeWinPlot
List computeWinPlot(IntegerVector covPosLen, IntegerVector covPosVal, IntegerVector covNegLen, IntegerVector covNegVal, double readLength, int end, int win, int step, int minCov);
RcppExport SEXP rnaCleanR_computeWinPlot(SEXP covPosLenSEXP, SEXP covPosValSEXP, SEXP covNegLenSEXP, SEXP covNegValSEXP, SEXP readLengthSEXP, SEXP endSEXP, SEXP winSEXP, SEXP stepSEXP, SEXP minCovSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type covPosLen(covPosLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covPosVal(covPosValSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegLen(covNegLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegVal(covNegValSEXP);
    Rcpp::traits::input_parameter< double >::type readLength(readLengthSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type win(winSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type minCov(minCovSEXP);
    rcpp_result_gen = Rcpp::wrap(computeWinPlot(covPosLen, covPosVal, covNegLen, covNegVal, readLength, end, win, step, minCov));
    return rcpp_result_gen;
END_RCPP
}
// computeWinVerbose
List computeWinVerbose(IntegerVector covPosLen, IntegerVector covPosVal, IntegerVector covNegLen, IntegerVector covNegVal, double readLength, int end, int win, int step, int minCov, int maxCov, double logitThreshold);
RcppExport SEXP rnaCleanR_computeWinVerbose(SEXP covPosLenSEXP, SEXP covPosValSEXP, SEXP covNegLenSEXP, SEXP covNegValSEXP, SEXP readLengthSEXP, SEXP endSEXP, SEXP winSEXP, SEXP stepSEXP, SEXP minCovSEXP, SEXP maxCovSEXP, SEXP logitThresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type covPosLen(covPosLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covPosVal(covPosValSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegLen(covNegLenSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type covNegVal(covNegValSEXP);
    Rcpp::traits::input_parameter< double >::type readLength(readLengthSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< int >::type win(winSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type minCov(minCovSEXP);
    Rcpp::traits::input_parameter< int >::type maxCov(maxCovSEXP);
    Rcpp::traits::input_parameter< double >::type logitThreshold(logitThresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(computeWinVerbose(covPosLen, covPosVal, covNegLen, covNegVal, readLength, end, win, step, minCov, maxCov, logitThreshold));
    return rcpp_result_gen;
END_RCPP
}
// keepRead
List keepRead(DataFrame posFragments, DataFrame negFragments, DataFrame keptPosWin, DataFrame keptNegWin, int win, int step, double errorRate);
RcppExport SEXP rnaCleanR_keepRead(SEXP posFragmentsSEXP, SEXP negFragmentsSEXP, SEXP keptPosWinSEXP, SEXP keptNegWinSEXP, SEXP winSEXP, SEXP stepSEXP, SEXP errorRateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type posFragments(posFragmentsSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type negFragments(negFragmentsSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type keptPosWin(keptPosWinSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type keptNegWin(keptNegWinSEXP);
    Rcpp::traits::input_parameter< int >::type win(winSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    Rcpp::traits::input_parameter< double >::type errorRate(errorRateSEXP);
    rcpp_result_gen = Rcpp::wrap(keepRead(posFragments, negFragments, keptPosWin, keptNegWin, win, step, errorRate));
    return rcpp_result_gen;
END_RCPP
}
