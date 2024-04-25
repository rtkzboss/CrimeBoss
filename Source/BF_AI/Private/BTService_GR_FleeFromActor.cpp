#include "BTService_GR_FleeFromActor.h"

UBTService_GR_FleeFromActor::UBTService_GR_FleeFromActor() {
    this->NodeName = TEXT("GlobalReaction - Flee From Actor");
    this->SafeDistance = 500.00f;
    this->SafeDistanceFromBB = true;
    this->QueryTemplate = NULL;
    this->EQSCooldown = 1.00f;
    this->InnerRangeMultiplier = 1.20f;
    this->OuterRangeMultiplier = 1.70f;
}


