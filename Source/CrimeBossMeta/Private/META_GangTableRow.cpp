#include "META_GangTableRow.h"

FMETA_GangTableRow::FMETA_GangTableRow() {
    (*this).ID = EMETA_Gang::None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).GangName = FText::FromString(TEXT(""));
    (*this).BossGender = ETextGender::Masculine;
    (*this).BossDescription = FText::FromString(TEXT(""));
    (*this).GangDescription = FText::FromString(TEXT(""));
}

