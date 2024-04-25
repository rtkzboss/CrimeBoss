#include "IGS_PlayerEffectsComponent.h"

UIGS_PlayerEffectsComponent::UIGS_PlayerEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashEffectivityMultiplierAttribute = 1.00f;
}

void UIGS_PlayerEffectsComponent::StopDrillSparks() {
}

void UIGS_PlayerEffectsComponent::StopDownstateEffect() const {
}

void UIGS_PlayerEffectsComponent::StartDrillSparks(AActor* inDrillActor) {
}

void UIGS_PlayerEffectsComponent::PlayRainOnCameraEffect(bool inEnters) {
}

void UIGS_PlayerEffectsComponent::PlayFlashbangEffectsWithInstigator(AActor* inTarget, AActor* inInstigator, float inEffectRange) const {
}

void UIGS_PlayerEffectsComponent::PlayFlashbangEffectsWithDurationAndPowerOverride(float inOverrideDuration, float inOverridePower) const {
}

void UIGS_PlayerEffectsComponent::PlayFlashbangEffects(float inDistanceBasedNormalizedPower, float inDOT) const {
}

void UIGS_PlayerEffectsComponent::PlayExplosionEffect(const FIGS_ExplosionParams& inExplosionParams) const {
}

void UIGS_PlayerEffectsComponent::PlayDownstateEffect() const {
}

void UIGS_PlayerEffectsComponent::OnHealthStateChanged(EIGS_HealthState inHealthState) const {
}

void UIGS_PlayerEffectsComponent::OnHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) const {
}

void UIGS_PlayerEffectsComponent::OnDrillDestroyed(AActor* inDrillActor) {
}

void UIGS_PlayerEffectsComponent::Multicast_PlayFlashbangEffectsWithDurationAndPower_Internal_Implementation(float inOverrideDuration, float inOverridePower) {
}

void UIGS_PlayerEffectsComponent::Multicast_PlayFlashbangEffects_Internal_Implementation(float inDistanceBasedNormalizedPower, float inDOT) {
}

void UIGS_PlayerEffectsComponent::Multicast_PlayExplosionEffects_Implementation(const FIGS_ExplosionParams& inExplosionParams) const {
}

void UIGS_PlayerEffectsComponent::ChangeCamera(UIGS_CameraComponentBase* inCamera, TArray<EIGS_PlayerEffect> inEffectsToRebind, bool inChangeCameraForAll) {
}


