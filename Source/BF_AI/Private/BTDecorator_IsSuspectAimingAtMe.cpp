#include "BTDecorator_IsSuspectAimingAtMe.h"

UBTDecorator_IsSuspectAimingAtMe::UBTDecorator_IsSuspectAimingAtMe() {
    this->NodeName = TEXT("Is Someone Aiming At Me");
    this->SeePlayerConeHalfAngleDeg = 45.00f;
    this->SeePlayerDistance = 1000.00f;
    this->PlayerAimingAtHalfAngleDeg = 5.00f;
    this->ShouldCheckLineTrace = true;
}


