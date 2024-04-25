#include "IGS_WidgetItemInfo.h"

UIGS_WidgetItemInfo::UIGS_WidgetItemInfo() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemNameText = NULL;
    this->ItemTypeText = NULL;
    this->ItemSubTypeText = NULL;
    this->ILVLText = NULL;
    this->HeaderBGBorder = NULL;
    this->SubHeaderBGBorder = NULL;
    this->ItemStatsVerticalBox = NULL;
    this->ModsVerticalBox = NULL;
    this->WidgetItemStatClass = NULL;
    this->ItemName = FText::FromString(TEXT("Kalashnikov AK-47"));
    this->ItemType = FText::FromString(TEXT("PRIMARY Weapon"));
    this->ItemSubType = FText::FromString(TEXT("Assault Rifle"));
    this->ItemLevel = 99;
    this->ItemDescription = FText::FromString(TEXT("Description"));
}


