#include "IGS_PlayerStateFramework.h"

AIGS_PlayerStateFramework::AIGS_PlayerStateFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_PlayerStateFramework::SetRespect(EMETA_RespectLvl inRespect) {
}

void AIGS_PlayerStateFramework::SetProgressionLevel(int32 inLevel) {
}

void AIGS_PlayerStateFramework::SetIsReady() {
}

bool AIGS_PlayerStateFramework::IsReady() const {
    return false;
}

bool AIGS_PlayerStateFramework::IsInitialized() const {
    return false;
}

EMETA_RespectLvl AIGS_PlayerStateFramework::GetRespect() const {
    return EMETA_RespectLvl::Low;
}

int32 AIGS_PlayerStateFramework::GetProgressionLevel() const {
    return 0;
}


