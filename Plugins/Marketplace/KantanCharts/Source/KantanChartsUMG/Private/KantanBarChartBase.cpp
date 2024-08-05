#include "KantanBarChartBase.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"

UKantanBarChartBase::UKantanBarChartBase() {
    (*this).WidgetStyle.BarOpacity = 1.000000000e+00f;
    (*this).WidgetStyle.BarOutlineOpacity = 1.000000000e+00f;
    (*this).WidgetStyle.BarOutlineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.Background.ImageSize.X = 3.200000000e+01f;
    (*this).WidgetStyle.Background.ImageSize.Y = 3.200000000e+01f;
    (*TBaseStructure<FSlateColor>::Get()->FindPropertyByName("SpecifiedColor")->ContainerPtrToValuePtr<FLinearColor>(&(*this).WidgetStyle.Background.TintColor, 0)).A = 3.000000119e-01f;
    (*this).WidgetStyle.Background.DrawAs = ESlateBrushDrawType::Image;
    (*this).WidgetStyle.ChartLineColor.R = 1.000000000e+00f;
    (*this).WidgetStyle.ChartLineColor.G = 1.000000000e+00f;
    (*this).WidgetStyle.ChartLineColor.B = 1.000000000e+00f;
    (*this).WidgetStyle.ChartLineColor.A = 6.000000238e-01f;
    (*this).WidgetStyle.ChartLineThickness = 1.000000000e+00f;
    (*this).WidgetStyle.TitleFontSize = 24;
    (*this).WidgetStyle.FontColor.R = 1.000000000e+00f;
    (*this).WidgetStyle.FontColor.G = 1.000000000e+00f;
    (*this).WidgetStyle.FontColor.B = 1.000000000e+00f;
    (*this).WidgetStyle.FontColor.A = 1.000000000e+00f;
    (*this).LabelPosition = EKantanBarLabelPosition::Standard;
    (*this).BarToGapRatio = 3.000000000e+00f;
    (*this).ValueExtentsDisplay = EKantanBarValueExtents::ZeroLineOnly;
    (*this).ValueAxisCfg.MarkerSpacing = 1.000000000e+00f;
    (*this).ValueAxisCfg.MaxValueDigits = 5;
    (*this).ValueAxisCfg.LeftBottomAxis.bEnabled = true;
    (*this).ValueAxisCfg.LeftBottomAxis.bShowMarkers = true;
    (*this).ValueAxisCfg.LeftBottomAxis.bShowLabels = true;
}

void UKantanBarChartBase::SetValueAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation) {
}

void UKantanBarChartBase::SetMaxBarValue(float InMaxValue) {
}

void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition) {
}

void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents) {
}

void UKantanBarChartBase::SetBarToGapRatio(float InRatio) {
}


