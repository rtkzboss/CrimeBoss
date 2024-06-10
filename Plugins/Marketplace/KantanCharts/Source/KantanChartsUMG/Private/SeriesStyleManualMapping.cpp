#include "SeriesStyleManualMapping.h"

FSeriesStyleManualMapping::FSeriesStyleManualMapping() {
    (*this).SeriesId = NAME_None;
    (*this).Style.StyleId = NAME_None;
    (*this).Style.PointStyle = nullptr;
    (*this).Style.Color.R = 1.000000000e+00f;
    (*this).Style.Color.G = 1.000000000e+00f;
    (*this).Style.Color.B = 1.000000000e+00f;
    (*this).Style.Color.A = 1.000000000e+00f;
}

