#include "IGS_SuppressionHandlerComponent.h"
#include "EIGS_OverlapResponseType.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_SuppressionHandlerComponent::UIGS_SuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeadCollisionCapsuleRadius = 2.500000000e+01f;
    (*this).AggroDuration = 7.000000000e+00f;
    (*this).EventsToActivate = 2.000000000e+00f;
    (*this).AggroDisabledDuration = 2.000000000e+00f;
    (*this).AggroCumulationTimeout = 5.000000000e+00f;
}

void UIGS_SuppressionHandlerComponent::SetCapsuleSize(float inCapsuleSize) {
}

void UIGS_SuppressionHandlerComponent::OnCharacterHit(float inDamage, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}


