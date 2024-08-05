#include "IGS_LaserTrapManager.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_LaserTrapManager::AIGS_LaserTrapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsStimuliForAI = true;
}

void AIGS_LaserTrapManager::SetLasersEnabled(bool inState) {
}


bool AIGS_LaserTrapManager::GetLaserState() const {
    return false;
}

bool AIGS_LaserTrapManager::GetIsStimuliForAI() const {
    return false;
}

void AIGS_LaserTrapManager::DeleteObstacle() const {
}


