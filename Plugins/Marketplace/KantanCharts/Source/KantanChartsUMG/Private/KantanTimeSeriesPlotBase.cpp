#include "KantanTimeSeriesPlotBase.h"
#include "EKantanDataPointSize.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UKantanTimeSeriesPlotBase::UKantanTimeSeriesPlotBase() {
    (*this).bUseFixedTimeRange = true;
    (*this).DisplayTimeRange = 1.000000000e+01f;
    (*this).bExtendValueRangeToZero = true;
}

void UKantanTimeSeriesPlotBase::SetUpperValueBound(FCartesianRangeBound InUpperBound) {
}

void UKantanTimeSeriesPlotBase::SetUpperTimeBound(FCartesianRangeBound InUpperBound) {
}

void UKantanTimeSeriesPlotBase::SetLowerValueBound(FCartesianRangeBound InLowerBound) {
}

void UKantanTimeSeriesPlotBase::SetLowerTimeBound(FCartesianRangeBound InLowerBound) {
}


