#include "IGS_WidgetItemInfo.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetItemInfo::UIGS_WidgetItemInfo() : UUserWidget(FObjectInitializer::Get()) {
    (*this).ItemName = FText::FromString(TEXT("Kalashnikov AK-47"));
    (*this).ItemType = FText::FromString(TEXT("PRIMARY Weapon"));
    (*this).ItemSubType = FText::FromString(TEXT("Assault Rifle"));
    (*this).ItemLevel = 99;
    (*this).ItemDescription = FText::FromString(TEXT("Description"));
}


