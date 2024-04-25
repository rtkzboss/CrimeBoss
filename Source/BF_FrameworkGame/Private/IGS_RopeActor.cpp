#include "IGS_RopeActor.h"
#include "Components/SceneComponent.h"
#include "IGS_RopeComponent.h"

AIGS_RopeActor::AIGS_RopeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RopeComponent = CreateDefaultSubobject<UIGS_RopeComponent>(TEXT("RopeComponennt"));
    this->RopeComponent->SetupAttachment(RootComponent);
}

void AIGS_RopeActor::UnLockEndParticle_Implementation() {
}

void AIGS_RopeActor::ThrowRope_Implementation() {
}

void AIGS_RopeActor::SetUser_Implementation(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_RopeActor::SetParameters_Implementation(EIGS_RopeType inRopeType, FRotator InRotation, FVector inStart, FVector inEnd) {
}

void AIGS_RopeActor::SetEnableUpdateClimbDownPoints_Implementation() {
}

void AIGS_RopeActor::RopeEndTransition_Implementation(bool OptimizeRope) {
}

void AIGS_RopeActor::RollOffRope_Implementation() {
}

void AIGS_RopeActor::PlayerStopUsingRope_Implementation(bool NewRollOffRope, bool DestroyAfterUse) {
}

void AIGS_RopeActor::PlayerStartUsingRope_Implementation(AIGS_GameCharacterFramework* inUser, EIGS_RopeType inRopeType) {
}

void AIGS_RopeActor::AllowEndPointMove_Implementation() {
}


