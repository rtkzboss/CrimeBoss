#include "BTDecorator_IsSuspectAimingAtMe.h"

UBTDecorator_IsSuspectAimingAtMe::UBTDecorator_IsSuspectAimingAtMe() {
    (*this).SeePlayerConeHalfAngleDeg = 4.500000000e+01f;
    (*this).SeePlayerDistance = 1.000000000e+03f;
    (*this).PlayerAimingAtHalfAngleDeg = 5.000000000e+00f;
    (*this).ShouldCheckLineTrace = true;
    (*this).NodeName = TEXT("Is Someone Aiming At Me");
}


