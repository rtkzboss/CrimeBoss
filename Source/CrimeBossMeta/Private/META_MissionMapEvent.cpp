#include "META_MissionMapEvent.h"

UMETA_MissionMapEvent::UMETA_MissionMapEvent() {
    this->m_Mission = NULL;
    this->m_IsNew = true;
}

void UMETA_MissionMapEvent::Init(UMETA_BaseMission* inMission, FGameplayTag inTileTag, bool inIsNew) {
}

FGameplayTag UMETA_MissionMapEvent::GetTileTag() {
    return FGameplayTag{};
}

UMETA_BaseMission* UMETA_MissionMapEvent::GetMission() {
    return NULL;
}

bool UMETA_MissionMapEvent::GetIsNew() {
    return false;
}


