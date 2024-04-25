#include "IGS_ProjectileBase.h"
#include "Templates/SubclassOf.h"

AIGS_ProjectileBase::AIGS_ProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawDebugTrace = EDrawDebugTrace::None;
    this->TraceChannel = TraceTypeQuery3;
    this->DamageType = NULL;
    this->ShotImpactType = NULL;
}

void AIGS_ProjectileBase::SetWeaponObject(UIGS_WeaponInventoryObject* inWeaponObject) {
}

void AIGS_ProjectileBase::SetWeaponActor(AActor* inWeaponActor) {
}

void AIGS_ProjectileBase::SetRange(float inEffectiveRange, float inMaxRange, float inLineTraceEnd) {
}

void AIGS_ProjectileBase::SetMuzzleLocation(const FVector& inMuzzleLocation) {
}

void AIGS_ProjectileBase::SetImpactLoudness(float inBaseImpactLoudness) {
}

void AIGS_ProjectileBase::SetDamage(float inBaseDamage, float inMinDamageMult) {
}

void AIGS_ProjectileBase::SetCharacterOwner(AIGS_GameCharacterFramework* inOwner) {
}

void AIGS_ProjectileBase::OnProjectileProcessed_Implementation(float inDistance, bool inHit, const FHitResult& inHitResult, const bool bIsPenetratingHit, float inDamageDealt) {
}

void AIGS_ProjectileBase::MakeImpactNoiseAndEvent(FVector inNoiseLocation) {
}

float AIGS_ProjectileBase::GetDamageForRange(float inDistance) const {
    return 0.0f;
}

AActor* AIGS_ProjectileBase::GetCharacterOwner() const {
    return NULL;
}

AIGS_GameCharacterFramework* AIGS_ProjectileBase::GetCharacterInstigator() const {
    return NULL;
}

void AIGS_ProjectileBase::CreateEffect(AIGS_GameCharacterFramework* inInstigatorCharacter, TSubclassOf<UDamageType> inDamageType, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult inHitResult) {
}

void AIGS_ProjectileBase::ApplyDebuffs(AActor* inDamagedActor, float inDistance) {
}

float AIGS_ProjectileBase::ApplyDamage(float inDistance, const FHitResult& inHitInfo) {
    return 0.0f;
}


