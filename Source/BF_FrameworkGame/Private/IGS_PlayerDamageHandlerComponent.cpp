#include "IGS_PlayerDamageHandlerComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerDamageHandlerComponent::UIGS_PlayerDamageHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bActivateDamageLimiterOnFirstHit.Value = 1.000000000e+00f;
    (*this).FirstHitLimiterCooldown.Value = 7.000000000e+00f;
    (*this).DamageSumInterval.Value = 1.000000000e+00f;
    (*this).DamageSumActivationThreshold.Value = 1.000000000e+02f;
    (*this).bActivateDamageLimiterOnLowHealth.Value = 1.000000000e+00f;
    (*this).bLowHealthThresholdRelative.Value = 1.000000000e+00f;
    (*this).LowHealthThresholdRelative.Value = 3.000000000e+01f;
    (*this).LowHealthThresholdAbsolute.Value = 1.250000000e+02f;
    (*this).ApplyPlayerFriendlyFire = true;
    (*this).FriendlyFireMinHealth = 5.000000000e+01f;
}


