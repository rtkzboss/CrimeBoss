#include "IGS_BreakableMeshComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Net/UnrealNetwork.h"

UIGS_BreakableMeshComponent::UIGS_BreakableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).OverlappableType = EIGS_OverlapResponseType::ORT_Penetration;
    (*this).bShowMeleePrompt = true;
    (*this).bUseObjectStatusHealth = true;
    (*this).bCanTakeBulletDamage = true;
    (*this).bCanTakeMeleeDamage = true;
    (*this).bCanTakeExplosiveDamage = true;
    (*this).CollisionProfileOnBreak = TEXT("PhysicsActor");
    (*this).PushImpulseStrength = 1.000000000e+02f;
}

void UIGS_BreakableMeshComponent::TriggerBreakEvents(AActor* inDmgCauser) {
}

void UIGS_BreakableMeshComponent::SwitchMaterial() {
}

void UIGS_BreakableMeshComponent::SpawnParticlesImpact(FVector Location) {
}

void UIGS_BreakableMeshComponent::SpawnParticles() {
}

void UIGS_BreakableMeshComponent::PreBreak() {
}

void UIGS_BreakableMeshComponent::OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_BreakableMeshComponent::OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser) {
}

void UIGS_BreakableMeshComponent::OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) {
}

void UIGS_BreakableMeshComponent::OnRep_IsBroken() {
}

bool UIGS_BreakableMeshComponent::IsBroken() const {
    return false;
}

void UIGS_BreakableMeshComponent::HandleBreakableMeshState() {
}

float UIGS_BreakableMeshComponent::GetHealth() const {
    return 0.0f;
}

void UIGS_BreakableMeshComponent::BreakComponent() {
}

void UIGS_BreakableMeshComponent::Break(AActor* inDmgCauser, FVector inHitLocation) {
}

void UIGS_BreakableMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_BreakableMeshComponent, mR_IsBroken);
}


