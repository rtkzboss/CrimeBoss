#include "IGS_SoapCarry.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SoapCarry::AIGS_SoapCarry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsSlipEnabled = true;
    (*this).TimeToSlipOff = 3.000000000e+00f;
    (*this).RandomRangeForTimer = 2.000000000e+00f;
}

void AIGS_SoapCarry::SlippingOff_Implementation() {
}


