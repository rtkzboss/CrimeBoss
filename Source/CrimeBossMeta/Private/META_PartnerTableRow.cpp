#include "META_PartnerTableRow.h"

FMETA_PartnerTableRow::FMETA_PartnerTableRow() {
    (*this).ID = EMETA_Partner::None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
}

