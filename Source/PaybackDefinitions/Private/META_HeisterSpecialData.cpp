#include "META_HeisterSpecialData.h"

FMETA_HeisterSpecialData::FMETA_HeisterSpecialData() {
    (*this).Name = TEXT("");
    (*this).Surname = FText::FromString(TEXT(""));
    (*this).HeisterQuality = EMETA_ItemQuality::None;
}

