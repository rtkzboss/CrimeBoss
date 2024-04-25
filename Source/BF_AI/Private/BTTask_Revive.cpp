#include "BTTask_Revive.h"

UBTTask_Revive::UBTTask_Revive() {
    this->NodeName = TEXT("Revive");
    this->bDontUsePathLengthLimiter = true;
    this->DistanceToMove = 150.00f;
    this->DistanceToStop = 50.00f;
    this->Character = NULL;
    this->CharacterToRevive = NULL;
}


