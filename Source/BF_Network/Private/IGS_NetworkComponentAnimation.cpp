#include "IGS_NetworkComponentAnimation.h"

UIGS_NetworkComponentAnimation::UIGS_NetworkComponentAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_NetworkComponentAnimation::MessageToServer_PlayerLightMeleeChainAttackVariantChange_Implementation(int32 inChainIdx) {
}
bool UIGS_NetworkComponentAnimation::MessageToServer_PlayerLightMeleeChainAttackVariantChange_Validate(int32 inChainIdx) {
    return true;
}

void UIGS_NetworkComponentAnimation::MessageToServer_PlayerInteractionRespondChangeReliable_Implementation(EIGS_InteractionAnimationTypes inVariant) {
}
bool UIGS_NetworkComponentAnimation::MessageToServer_PlayerInteractionRespondChangeReliable_Validate(EIGS_InteractionAnimationTypes inVariant) {
    return true;
}

void UIGS_NetworkComponentAnimation::MessageToServer_PlayerInteractionRespondChange_Implementation(EIGS_InteractionAnimationTypes inVariant) {
}
bool UIGS_NetworkComponentAnimation::MessageToServer_PlayerInteractionRespondChange_Validate(EIGS_InteractionAnimationTypes inVariant) {
    return true;
}

void UIGS_NetworkComponentAnimation::MessageToServer_PlayerHeavyMeleeChainAttackVariantChange_Implementation(int32 inChainIdx) {
}
bool UIGS_NetworkComponentAnimation::MessageToServer_PlayerHeavyMeleeChainAttackVariantChange_Validate(int32 inChainIdx) {
    return true;
}

void UIGS_NetworkComponentAnimation::MessageToAll_PlayerLightMeleeChainAttackVariantChange_Implementation(int32 inChainIdx) {
}

void UIGS_NetworkComponentAnimation::MessageToAll_PlayerInteractionRespondChangeReliable_Implementation(EIGS_InteractionAnimationTypes inVariants) {
}

void UIGS_NetworkComponentAnimation::MessageToAll_PlayerInteractionRespondChange_Implementation(EIGS_InteractionAnimationTypes inVariants) {
}

void UIGS_NetworkComponentAnimation::MessageToAll_PlayerHeavyMeleeChainAttackVariantChange_Implementation(int32 inChainIdx) {
}


