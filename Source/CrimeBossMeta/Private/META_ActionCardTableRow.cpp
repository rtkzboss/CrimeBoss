#include "META_ActionCardTableRow.h"
#include "EMETA_ActionCardTheme.h"

FMETA_ActionCardTableRow::FMETA_ActionCardTableRow() {
    (*this).Data.Title = FText::FromString(TEXT(""));
    (*this).Data.Description = FText::FromString(TEXT(""));
    (*this).Data.Theme = EMETA_ActionCardTheme::Favour;
    (*this).Data.bImmediately = false;
    (*this).Data.bActionCardWithDuration = false;
    (*this).Data.IndexOfDurationValue = 0;
}

