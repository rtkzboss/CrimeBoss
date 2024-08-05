#include "CartesianAxisConfig.h"

FCartesianAxisConfig::FCartesianAxisConfig() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Unit = FText::FromString(TEXT(""));
    (*this).MarkerSpacing = 1.000000000e+00f;
    (*this).MaxValueDigits = 5;
    (*this).LeftBottomAxis.bEnabled = false;
    (*this).LeftBottomAxis.bShowTitle = false;
    (*this).LeftBottomAxis.bShowMarkers = true;
    (*this).LeftBottomAxis.bShowLabels = true;
    (*this).RightTopAxis.bEnabled = false;
    (*this).RightTopAxis.bShowTitle = false;
    (*this).RightTopAxis.bShowMarkers = true;
    (*this).RightTopAxis.bShowLabels = true;
    (*this).FloatingAxis.bEnabled = false;
    (*this).FloatingAxis.bShowTitle = false;
    (*this).FloatingAxis.bShowMarkers = true;
    (*this).FloatingAxis.bShowLabels = true;
}

