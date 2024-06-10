#include "KantanChart.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"

UKantanChart::UKantanChart() {
    (*this).TitlePadding.Top = 5.000000000e+00f;
    (*this).TitlePadding.Bottom = 5.000000000e+00f;
}

void UKantanChart::SetUpdateTickRate(float InRate) {
}

void UKantanChart::SetMargins(const FMargin& InMargins) {
}

void UKantanChart::SetChartTitlePadding(const FMargin& InPadding) {
}

void UKantanChart::SetChartTitle(const FText& InTitle) {
}


