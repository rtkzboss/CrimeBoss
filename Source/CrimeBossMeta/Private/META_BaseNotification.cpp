#include "META_BaseNotification.h"

UMETA_BaseNotification::UMETA_BaseNotification() {
    this->Effect = EMETA_NotificationEffect::Neutral;
    this->Type = EMETA_NotificationType::Small;
    this->HideInIntro = false;
}

void UMETA_BaseNotification::SetInfo(TSoftObjectPtr<UMETA_NotificationID> inID, EMETA_NotificationType inType, FText InTitle, FText inDescription, EMETA_NotificationEffect inEffect, TSoftObjectPtr<UTexture2D> inImage, TSoftObjectPtr<UMETA_NotificationID> inAggregationID, bool inHideInIntro) {
}

void UMETA_BaseNotification::SetImage(TSoftObjectPtr<UTexture2D> inImage) {
}

EMETA_NotificationType UMETA_BaseNotification::GetType() const {
    return EMETA_NotificationType::Small;
}

FText UMETA_BaseNotification::GetTitle() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMETA_BaseNotification::GetImage() const {
    return NULL;
}

TSoftObjectPtr<UMETA_NotificationID> UMETA_BaseNotification::GetId() const {
    return NULL;
}

bool UMETA_BaseNotification::GetHideInIntro() const {
    return false;
}

EMETA_NotificationEffect UMETA_BaseNotification::GetEffect() const {
    return EMETA_NotificationEffect::Neutral;
}

FText UMETA_BaseNotification::GetDescription() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UMETA_NotificationID> UMETA_BaseNotification::GetAggregateID() const {
    return NULL;
}


