#include "IGS_GlassTempered.h"
#include "Net/UnrealNetwork.h"

UIGS_GlassTempered::UIGS_GlassTempered(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GlassPanelPreset = EIGS_GlassPreset::Panel_None;
    this->BaseMesh = NULL;
    this->FracturedMesh = NULL;
    this->MaterialOverride = NULL;
    this->ParticleOnBreak = NULL;
    this->ParticleOnFracture = NULL;
    this->StickerTexture = NULL;
    this->ShardSpawnRatio = 25.00f;
    this->AkEventOnBreak = NULL;
    this->AkEventOnFracture = NULL;
    this->ClearBrush = NULL;
    this->FracturedImpactBrush = NULL;
    this->SaveLastFrameBrush = NULL;
    this->ImpactHoleSize = 20.00f;
    this->DamageMax = 120.00f;
    this->VelocityDamageThreshold = 1500.00f;
    this->RTWidthAndHeight = 64;
    this->bKeepCollisionOnDestroy = false;
    this->m_HitpointsRT = NULL;
    this->m_LastFrameRT = NULL;
    this->m_DynamicFracturedMaterial = NULL;
    this->m_DynamicPaintBrushMaterial = NULL;
    this->m_DynamicSavedFrameMaterial = NULL;
    this->m_OriginalMaterial = NULL;
    this->m_HitParticle1Ref = NULL;
    this->m_HitParticle2Ref = NULL;
    this->m_BreakParticleRef = NULL;
    this->m_bIdBrokenLocal = false;
}

void UIGS_GlassTempered::UpdateRenderTarget() {
}

void UIGS_GlassTempered::Sync_GlassStatus() {
}

void UIGS_GlassTempered::SetCustomMeshes(UStaticMesh* inNewBaseMesh, UStaticMesh* inNewFracturedMesh) {
}

void UIGS_GlassTempered::PrepRenderTarget() {
}

void UIGS_GlassTempered::OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_GlassTempered::OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser) {
}

void UIGS_GlassTempered::OnRep_GlassStatus() {
}

void UIGS_GlassTempered::OnComponentOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void UIGS_GlassTempered::OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void UIGS_GlassTempered::FractureGlass(FVector inHitLocation, FVector2D inHitUV, float inHoleSize) {
}

bool UIGS_GlassTempered::CanDoDamage(FVector inHitLocation) {
    return false;
}

void UIGS_GlassTempered::BreakGlass_Implementation(FVector_NetQuantize10 inHitLocation, FVector_NetQuantizeNormal inFXPushAxis, EIGS_DamageType inDamageType) {
}

void UIGS_GlassTempered::ApplyDamageToGlass_Implementation(FVector_NetQuantize10 inHitLocation, FVector_NetQuantize10 inDamageCauserLocation, EIGS_DamageType inDamageType, float inHoleSize) {
}

void UIGS_GlassTempered::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_GlassTempered, mR_GlassStatus);
}


