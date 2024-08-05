#include "IGS_WidgetItemStat.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetItemStat::UIGS_WidgetItemStat() : UUserWidget(FObjectInitializer::Get()) {
    (*this).TextColor.R = 6.000000238e-01f;
    (*this).TextColor.G = 6.859999895e-01f;
    (*this).TextColor.B = 5.649999976e-01f;
    (*this).TextColor.A = 1.000000000e+00f;
    (*this).StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    (*this).StatValue = FText::FromString(TEXT("UNKNOWN_VALUE"));
}


