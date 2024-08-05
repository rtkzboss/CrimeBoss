#include "IGS_TokenPool.h"

UIGS_TokenPool::UIGS_TokenPool() {
}

UIGS_ActionToken* UIGS_TokenPool::TryToStealToken(AIGS_GameCharacterFramework* Instigator, int32 Priority, int32 BoostPriority, float BoostDuration) {
    return NULL;
}

void UIGS_TokenPool::ReturnToken(UIGS_ActionToken* Token) {
}

bool UIGS_TokenPool::IsTokenAvailable() {
    return false;
}

UIGS_ActionToken* UIGS_TokenPool::AcquireToken(AIGS_GameCharacterFramework* Instigator, int32 Priority, int32 BoostPriority, float BoostDuration) {
    return NULL;
}


