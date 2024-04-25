#include "IGS_BreakableMeshComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_BreakableMeshComponent::UIGS_BreakableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlappableType = EIGS_OverlapResponseType::ORT_Penetration;
    this->bIsEplosive = false;
    this->bShowMeleePrompt = true;
    this->bOnlyTakesDamageToSelf = false;
    this->bUseObjectStatusHealth = true;
    this->m_ObjectStatus = NULL;
    this->HasMultiBreakableComps = false;
    this->bUsesObjectStatus = false;
    this->BreakBehaviour = EIGS_WindowBreakBehaviour::Breakable;
    this->mR_IsBroken = false;
    this->mR_IsMaterialSwitched = false;
    this->bCanTakeBulletDamage = true;
    this->bCanTakeMeleeDamage = true;
    this->bCanTakeExplosiveDamage = true;
    this->bCanTakeBreachExplosiveDamage = false;
    this->bSimulatePhysicsOnBreak = false;
    this->CollisionProfileOnBreak = TEXT("PhysicsActor");
    this->PushImpulseOnBreak = EIGS_BreakPushImpulse::Break_Impulse_None;
    this->PushImpulseStrength = 100.00f;
    this->StaticMeshBroken = NULL;
    this->ParticleBreak = NULL;
    this->ParticleImpact = NULL;
    this->AkEventOnBreak = NULL;
    this->AkEventOnImpact = NULL;
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


