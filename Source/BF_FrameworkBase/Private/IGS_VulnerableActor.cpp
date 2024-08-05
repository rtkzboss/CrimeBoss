#include "IGS_VulnerableActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_VulnerableActor::AIGS_VulnerableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurrentHealth = 1.000000000e+02f;
    (*this).RelativeHealth = 1.000000000e+00f;
    (*this).MaxHealth = 1.000000000e+02f;
}

void AIGS_VulnerableActor::ResetVulnerableComponent() {
}

bool AIGS_VulnerableActor::GetIsBroken() {
    return false;
}

void AIGS_VulnerableActor::ApplyVulnerableDamage(float inAmount) {
}


