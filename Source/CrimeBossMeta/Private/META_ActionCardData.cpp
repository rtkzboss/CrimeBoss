#include "META_ActionCardData.h"

FMETA_ActionCardData::FMETA_ActionCardData() {
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Theme = EMETA_ActionCardTheme::Favour;
    (*this).bImmediately = false;
    (*this).bActionCardWithDuration = false;
    (*this).IndexOfDurationValue = 0;
}

