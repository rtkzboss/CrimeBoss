#include "IGS_ThrowableProjectileBase.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_ThrowableProjectileBase::AIGS_ThrowableProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollisionComponent"));
    (*this).ThrowableMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThrowableMeshComponent"));
    (*this).ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    (*this).bMakeImpactNoise = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = (USceneComponent*)CapsuleCollision;
    (*this).ThrowableMesh->SetupAttachment((*this).CapsuleCollision);
}

bool AIGS_ThrowableProjectileBase::WasThrownByAI() const {
    return false;
}

bool AIGS_ThrowableProjectileBase::WasThrown() const {
    return false;
}

void AIGS_ThrowableProjectileBase::ThrowCustom(AIGS_GameCharacterFramework* inThrower, FVector inThrowVelocity) {
}

void AIGS_ThrowableProjectileBase::ThrowAt(AIGS_GameCharacterFramework* inThrower, FVector inTargetPoint) {
}

void AIGS_ThrowableProjectileBase::Throw(AIGS_GameCharacterFramework* inThrower, bool inThrowLow) {
}

void AIGS_ThrowableProjectileBase::StartPhysics() {
}

void AIGS_ThrowableProjectileBase::OnThrown_Implementation() {
}


void AIGS_ThrowableProjectileBase::OnRep_Thrown() {
}

void AIGS_ThrowableProjectileBase::OnRep_Thrower() {
}

void AIGS_ThrowableProjectileBase::OnRep_IsCollisionEnabled() const {
}

void AIGS_ThrowableProjectileBase::OnRep_InventoryObjectClass() {
}

void AIGS_ThrowableProjectileBase::OnProjectileStopped(const FHitResult& inImpactResult) {
}

void AIGS_ThrowableProjectileBase::OnProjectileBounced(const FHitResult& inImpactResult, const FVector& inImpactVelocity) {
}

void AIGS_ThrowableProjectileBase::OnComponentHit(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inSweepResult) {
}

bool AIGS_ThrowableProjectileBase::IsOwner(AActor* inOwner) const {
    return false;
}

bool AIGS_ThrowableProjectileBase::IsInitialized() const {
    return false;
}

void AIGS_ThrowableProjectileBase::Init(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass, float inTimeHeldInHand) {
}

bool AIGS_ThrowableProjectileBase::HasHit() const {
    return false;
}

FVector AIGS_ThrowableProjectileBase::GetInitialVelocity() const {
    return FVector{};
}

float AIGS_ThrowableProjectileBase::GetInitialThrowSpeed() const {
    return 0.0f;
}

float AIGS_ThrowableProjectileBase::ApplyThrowableDamage(const FHitResult& inHitResult, float inBaseDamage, AIGS_GameCharacterFramework* inDamageCauser, TSubclassOf<UDamageType> inDamageType) {
    return 0.0f;
}

void AIGS_ThrowableProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_Thrower);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_TimeHeldInHand);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_ThrownData);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_ThrowableObjectClass);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_IsCollisionEnabled);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_bStoppedMoving);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_bHasHit);
    DOREPLIFETIME(AIGS_ThrowableProjectileBase, mR_bThrowedByAI);
}


