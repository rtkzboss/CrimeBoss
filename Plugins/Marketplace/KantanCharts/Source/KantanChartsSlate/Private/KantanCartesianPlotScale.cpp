#include "KantanCartesianPlotScale.h"

FKantanCartesianPlotScale::FKantanCartesianPlotScale() {
    (*this).Type = ECartesianScalingType::FixedScale;
    (*this).Scale.X = 1.000000000e+00f;
    (*this).Scale.Y = 1.000000000e+00f;
    (*this).FocalCoordinates.X = 0.000000000e+00f;
    (*this).FocalCoordinates.Y = 0.000000000e+00f;
    (*this).RangeX.Min = -1.000000000e+02f;
    (*this).RangeX.Max = 1.000000000e+02f;
    (*this).RangeY.Min = -1.000000000e+02f;
    (*this).RangeY.Max = 1.000000000e+02f;
}

