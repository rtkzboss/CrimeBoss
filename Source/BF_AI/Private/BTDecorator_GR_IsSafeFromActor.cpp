#include "BTDecorator_GR_IsSafeFromActor.h"

UBTDecorator_GR_IsSafeFromActor::UBTDecorator_GR_IsSafeFromActor() {
    this->NodeName = TEXT("Is Safe from Actor");
    this->SafeDistance = 500.00f;
    this->SafeDistanceFromBB = true;
    this->SafeWhenHidden = true;
}


