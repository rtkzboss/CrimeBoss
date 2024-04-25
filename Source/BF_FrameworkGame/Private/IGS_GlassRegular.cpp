#include "IGS_GlassRegular.h"
#include "IGS_BoxOverlappableComponent.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_GlassRegular::UIGS_GlassRegular(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->CastShadow = false;
    this->bEnableUpdateRateOptimizations = true;
    this->PhysicsTransformUpdateMode = EPhysicsTransformUpdateMode::ComponentTransformIsKinematic;
    this->bUpdateOverlapsOnAnimationFinalize = false;
    this->bNoSkeletonUpdate = true;
    this->GlassPanelPreset = EIGS_GlassRegularPreset::Panel_200X135;
    this->ScaleUniform = 1.00f;
    this->ScaleY = 1.00f;
    this->ScaleZ = 1.00f;
    this->GlassShape = Rectangular;
    this->MaterialOverride = NULL;
    this->bCanGlassEverAffectNavigation = false;
    this->BaseMesh = NULL;
    this->RadialDamageImposter = NULL;
    this->AkEventOnImpact = NULL;
    this->VelocityDamageThreshold = 1500.00f;
    this->MaxAngularImpulse = 10.00f;
    this->TimeToDestroyGlassShards = 2.00f;
    this->BreakNormalIntensity = 1.00f;
    this->CellsNormalIntensity = 0.00f;
    this->BreakOpacity = 0.50f;
    this->BreakIntensity = 0.10f;
    this->BulletBreakRadius = 10.00f;
    this->BulletBreakHeight = 10.00f;
    this->m_RamTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RamTrigger"));
    this->m_ChosenMeshIndex = 0;
    this->m_PresetScale = 1.00f;
    this->m_bFirstBreakLocal = false;
    this->m_DummyCollision = CreateDefaultSubobject<UIGS_BoxOverlappableComponent>(TEXT("DummyCollision"));
    this->m_RadialImposterRef = NULL;
    this->m_OriginalAttachParent = NULL;
    this->m_TimesBroken = 0;
}

bool UIGS_GlassRegular::ShouldCreateImpact() const {
    return false;
}

void UIGS_GlassRegular::ShatterGlass(FVector inHitPosition, FVector inImpulseStrength, float inObjectRadius, float inObjectHalfHeight) {
}

void UIGS_GlassRegular::ReAttachToOriginalParent() {
}

void UIGS_GlassRegular::OnTakeRadialDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, FVector inOrigin, FHitResult inHitInfo, AController* inInstigatedBy, AActor* inDamageCauser) {
}

void UIGS_GlassRegular::OnTakePointDamage(AActor* inDamagedActor, float inDamage, AController* inInstigatedBy, FVector inHitLocation, UPrimitiveComponent* inHitComponent, FName InBoneName, FVector inShotFromDirection, const UDamageType* inDamageType, AActor* inDamageCauser) {
}

void UIGS_GlassRegular::OnRep_SyncBrokenShards() {
}

void UIGS_GlassRegular::OnComponentOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void UIGS_GlassRegular::OnComponentHit_Implementation(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void UIGS_GlassRegular::InitRandomMeshSelection() {
}

void UIGS_GlassRegular::Init() {
}

bool UIGS_GlassRegular::HasFractureVelocity(FVector inImpactVelocity, float inNeededVelocity) {
    return false;
}

void UIGS_GlassRegular::FirstBreak(FVector inHitPosition, int32 inMeshIndex) {
}

void UIGS_GlassRegular::ExplodeGlass() {
}

void UIGS_GlassRegular::DisableDummyCollisionAffectingNavigation() {
}

void UIGS_GlassRegular::DeleteGlassShards() {
}

void UIGS_GlassRegular::BreakResponse(FName InParentBone) {
}

void UIGS_GlassRegular::ApplyDamageToGlass_Implementation(FVector_NetQuantize inHitPosition, FVector_NetQuantize inImpulseStrength, float inObjectRadius, float inObjectHalfHeight, AActor* inInstigator, bool inIsRadialDamage) {
}

void UIGS_GlassRegular::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_GlassRegular, mR_GlassState);
}


