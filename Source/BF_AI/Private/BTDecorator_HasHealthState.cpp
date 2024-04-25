#include "BTDecorator_HasHealthState.h"

UBTDecorator_HasHealthState::UBTDecorator_HasHealthState() {
    this->NodeName = TEXT("Has health state");
    this->DesiredHealthState = EIGS_HealthState::HS_Normal;
}


