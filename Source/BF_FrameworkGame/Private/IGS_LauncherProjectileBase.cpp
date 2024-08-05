#include "IGS_LauncherProjectileBase.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_LauncherProjectileBase::AIGS_LauncherProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollisionComponent"));
    (*this).ThrowableMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ThrowableMeshComponent"));
    (*this).bMakeImpactNoise = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = (USceneComponent*)CapsuleCollision;
    (*this).ThrowableMesh->SetupAttachment((*this).CapsuleCollision);
}

bool AIGS_LauncherProjectileBase::WasThrownByAI() const {
    return false;
}

bool AIGS_LauncherProjectileBase::WasThrown() const {
    return false;
}

void AIGS_LauncherProjectileBase::StartPhysics() {
}

void AIGS_LauncherProjectileBase::OnThrown_Implementation() {
}


void AIGS_LauncherProjectileBase::OnRep_Thrown() {
}

void AIGS_LauncherProjectileBase::OnRep_Thrower() {
}

void AIGS_LauncherProjectileBase::OnRep_IsCollisionEnabled() const {
}

void AIGS_LauncherProjectileBase::OnRep_InventoryObjectClass() {
}

bool AIGS_LauncherProjectileBase::IsOwner(AActor* inOwner) const {
    return false;
}

bool AIGS_LauncherProjectileBase::IsInitialized() const {
    return false;
}

void AIGS_LauncherProjectileBase::Init(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass) {
}

bool AIGS_LauncherProjectileBase::HasHit() const {
    return false;
}

FVector AIGS_LauncherProjectileBase::GetInitialVelocity() const {
    return FVector{};
}

float AIGS_LauncherProjectileBase::GetInitialThrowSpeed() const {
    return 0.0f;
}

float AIGS_LauncherProjectileBase::ApplyThrowableDamage(const FHitResult& inHitResult, float inBaseDamage, AIGS_GameCharacterFramework* inDamageCauser, TSubclassOf<UDamageType> inDamageType) {
    return 0.0f;
}

void AIGS_LauncherProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_Thrower);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_ThrownData);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_ThrowableObjectClass);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_IsCollisionEnabled);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_bStoppedMoving);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_bHasHit);
    DOREPLIFETIME(AIGS_LauncherProjectileBase, mR_bThrowedByAI);
}


