#include "SimpleTimeSeriesPlot.h"
#include "EKantanDataPointSize.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

USimpleTimeSeriesPlot::USimpleTimeSeriesPlot() {
}

void USimpleTimeSeriesPlot::BP_RemoveSeries(FName ID, bool& bSuccess) {
}

void USimpleTimeSeriesPlot::BP_RemoveAllSeries() {
}

void USimpleTimeSeriesPlot::BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines) {
}

void USimpleTimeSeriesPlot::BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines) {
}

void USimpleTimeSeriesPlot::BP_AddDatapointNow(FName SeriesId, float Value, bool& bSuccess) {
}

void USimpleTimeSeriesPlot::BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess) {
}


