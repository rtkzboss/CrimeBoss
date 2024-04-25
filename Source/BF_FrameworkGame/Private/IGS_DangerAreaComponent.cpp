#include "IGS_DangerAreaComponent.h"

UIGS_DangerAreaComponent::UIGS_DangerAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DangerRadius = 400.00f;
    this->IsDangerous = true;
    this->IsDangerousUntilAlarm = false;
}


