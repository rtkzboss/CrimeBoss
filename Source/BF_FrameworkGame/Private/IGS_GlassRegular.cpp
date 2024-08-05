#include "IGS_GlassRegular.h"
#include "IGS_BoxOverlappableComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/BoxComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"
#include "Components/SkinnedMeshComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Net/UnrealNetwork.h"

UIGS_GlassRegular::UIGS_GlassRegular(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GlassPanelPreset = EIGS_GlassRegularPreset::Panel_200X135;
    (*this).ScaleUniform = 1.000000000e+00f;
    (*this).ScaleY = 1.000000000e+00f;
    (*this).ScaleZ = 1.000000000e+00f;
    (*this).VelocityDamageThreshold = 1.500000000e+03f;
    (*this).MaxAngularImpulse = 1.000000000e+01f;
    (*this).TimeToDestroyGlassShards = 2.000000000e+00f;
    (*this).BreakNormalIntensity = 1.000000000e+00f;
    (*this).BreakOpacity = 5.000000000e-01f;
    (*this).BreakIntensity = 1.000000015e-01f;
    (*this).BulletBreakRadius = 1.000000000e+01f;
    (*this).BulletBreakHeight = 1.000000000e+01f;
    (*this).m_RamTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RamTrigger"));
    (*this).m_PresetScale = 1.000000000e+00f;
    (*this).m_DummyCollision = CreateDefaultSubobject<UIGS_BoxOverlappableComponent>(TEXT("DummyCollision"));
    (*this).PhysicsTransformUpdateMode = EPhysicsTransformUpdateMode::ComponentTransformIsKinematic;
    (*this).bUpdateOverlapsOnAnimationFinalize = false;
    (*this).bNoSkeletonUpdate = true;
    (*this).bEnableUpdateRateOptimizations = true;
    (*this).CastShadow = false;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType")->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_PhysicsBody;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionEnabled")->ContainerPtrToValuePtr<TEnumAsByte<ECollisionEnabled::Type>>(&(*this).BodyInstance, 0)) = ECollisionEnabled::QueryAndPhysics;
    (*TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName")->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("BreakableGlassPhysicsOnly");
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
    (*this).PrimaryComponentTick.TickInterval = 1.999999955e-02f;
    (*this).bAutoActivate = false;
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


