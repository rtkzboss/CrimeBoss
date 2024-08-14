#include "META_GangTableRow.h"

FMETA_GangTableRow::FMETA_GangTableRow() {
    (*this).ID = EMETA_Gang::None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).GangName = FText::FromString(TEXT(""));
    (*this).BossGender = ETextGender::Masculine;
    (*this).GangColor.R = 1.000000000e+00f;
    (*this).GangColor.G = 1.000000000e+00f;
    (*this).GangColor.B = 1.000000000e+00f;
    (*this).GangColor.A = 1.000000000e+00f;
    (*this).BossDescription = FText::FromString(TEXT(""));
    (*this).GangDescription = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
}

