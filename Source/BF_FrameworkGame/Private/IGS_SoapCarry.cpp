#include "IGS_SoapCarry.h"

AIGS_SoapCarry::AIGS_SoapCarry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSlipEnabled = true;
    this->TimeToSlipOff = 3.00f;
    this->RandomRangeForTimer = 2.00f;
    this->bIsCanThrow = false;
}

void AIGS_SoapCarry::SlippingOff_Implementation() {
}


