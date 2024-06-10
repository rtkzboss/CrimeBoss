#include "IGS_GenericItemsData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GenericItemsData::FIGS_GenericItemsData() {
    (*this).ItemWeight = EIGS_ItemWeight::Light;
    (*this).ItemType = EIGS_ItemType::Item_GenericItems;
}

