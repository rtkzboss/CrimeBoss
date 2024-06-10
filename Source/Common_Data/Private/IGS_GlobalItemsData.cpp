#include "IGS_GlobalItemsData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GlobalItemsData::FIGS_GlobalItemsData() {
    (*this).HUDIcon = nullptr;
    (*this).HUDIconText = FText::FromString(TEXT(""));
    (*this).MaxCount = -1;
    (*this).ItemType = EIGS_ItemType::Item_Global;
}

