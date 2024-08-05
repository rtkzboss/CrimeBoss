#include "IGS_Common_DataDevSettings_Items.h"

UIGS_Common_DataDevSettings_Items::UIGS_Common_DataDevSettings_Items() {
    (*this).GenericItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GenericItems/DT_GenericItemsDatabase.DT_GenericItemsDatabase"), TEXT(""));
    (*this).KeyItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GenericItems/DT_KeyItemsDatabase.DT_KeyItemsDatabase"), TEXT(""));
    (*this).LootItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GenericItems/DT_LootItemsDatabase.DT_LootItemsDatabase"), TEXT(""));
    (*this).GlobalItemsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/GenericItems/DT_GlobalItemsDatabase.DT_GlobalItemsDatabase"), TEXT(""));
    (*this).LootCollectionDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Blueprints/Loot/DT_LootCollectionsDatatable.DT_LootCollectionsDatatable"), TEXT(""));
}


