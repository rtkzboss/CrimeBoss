#include "IGS_GameModeFramework.h"

AIGS_GameModeFramework::AIGS_GameModeFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_GameModeFramework::SetPlayersImmortal(bool inImmortal) {
}

bool AIGS_GameModeFramework::IsAnyHeisterAlive(UObject* inWCO) {
    return false;
}


