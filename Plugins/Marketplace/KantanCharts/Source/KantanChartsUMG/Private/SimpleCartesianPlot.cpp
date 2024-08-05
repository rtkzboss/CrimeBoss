#include "SimpleCartesianPlot.h"
#include "EKantanDataPointSize.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

USimpleCartesianPlot::USimpleCartesianPlot() {
}

void USimpleCartesianPlot::BP_RemoveSeries(FName ID, bool& bSuccess) {
}

void USimpleCartesianPlot::BP_RemoveAllSeries() {
}

void USimpleCartesianPlot::BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines) {
}

void USimpleCartesianPlot::BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines) {
}

void USimpleCartesianPlot::BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess) {
}


