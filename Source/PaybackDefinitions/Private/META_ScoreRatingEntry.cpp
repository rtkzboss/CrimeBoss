#include "META_ScoreRatingEntry.h"

FMETA_ScoreRatingEntry::FMETA_ScoreRatingEntry() {
    (*this).RequiredScore = 0;
    (*this).RatingLabel = FText::FromString(TEXT(""));
}

