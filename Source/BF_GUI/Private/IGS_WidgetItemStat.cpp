#include "IGS_WidgetItemStat.h"

UIGS_WidgetItemStat::UIGS_WidgetItemStat() : UUserWidget(FObjectInitializer::Get()) {
    this->StatNameTextBlock = NULL;
    this->StatValueTextBlock = NULL;
    this->StatName = FText::FromString(TEXT("UNKNOWN_STAT"));
    this->StatValue = FText::FromString(TEXT("UNKNOWN_VALUE"));
}


