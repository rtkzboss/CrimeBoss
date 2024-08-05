#include "IGS_WidgetStatBar.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetStatBar::UIGS_WidgetStatBar() : UUserWidget(FObjectInitializer::Get()) {
    (*this).ProgressBarBackground.R = 2.999999933e-02f;
    (*this).ProgressBarBackground.G = 3.700000048e-02f;
    (*this).ProgressBarBackground.B = 3.429999948e-02f;
    (*this).ProgressBarBackground.A = 1.000000000e+00f;
    (*this).ProgressBarForeground.R = 6.000000238e-01f;
    (*this).ProgressBarForeground.G = 6.859999895e-01f;
    (*this).ProgressBarForeground.B = 5.649999976e-01f;
    (*this).ProgressBarForeground.A = 1.000000000e+00f;
    (*this).TextColor.R = 6.000000238e-01f;
    (*this).TextColor.G = 6.859999895e-01f;
    (*this).TextColor.B = 5.649999976e-01f;
    (*this).TextColor.A = 1.000000000e+00f;
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatMaxValue = 1.000000000e+03f;
}


