#include "META_TurfInfoMapEvent.h"

UMETA_TurfInfoMapEvent::UMETA_TurfInfoMapEvent() {
}

void UMETA_TurfInfoMapEvent::Init(FGameplayTag inTileTag, EMETA_Gang inNewGang, EMETA_Gang inPrevGang) {
}

FGameplayTag UMETA_TurfInfoMapEvent::GetTileTag() {
    return FGameplayTag{};
}

EMETA_Gang UMETA_TurfInfoMapEvent::GetPrevGang() {
    return EMETA_Gang::None;
}

EMETA_Gang UMETA_TurfInfoMapEvent::GetNewGang() {
    return EMETA_Gang::None;
}


