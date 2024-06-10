#include "META_NotificationTableRow.h"

FMETA_NotificationTableRow::FMETA_NotificationTableRow() {
    (*this).Type = EMETA_NotificationType::Small;
    (*this).Effect = EMETA_NotificationEffect::Neutral;
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).HideInIntro = false;
}

