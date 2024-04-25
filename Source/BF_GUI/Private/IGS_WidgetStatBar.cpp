#include "IGS_WidgetStatBar.h"

UIGS_WidgetStatBar::UIGS_WidgetStatBar() : UUserWidget(FObjectInitializer::Get()) {
    this->StatNameTextBlock = NULL;
    this->StatValueTextBlock = NULL;
    this->StatProgressBar = NULL;
    this->StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    this->StatValue = 0.00f;
    this->StatMinValue = 0.00f;
    this->StatMaxValue = 1000.00f;
}


