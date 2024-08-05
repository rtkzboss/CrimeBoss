#include "IGS_PickupActorBase.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "Net/UnrealNetwork.h"

AIGS_PickupActorBase::AIGS_PickupActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.DoNotCreateDefaultSubobject(TEXT("RootComp"))) {
    (*this).bRegistersToPickupsManager = true;
    (*this).SquaredVelocityForInAirNeeded = 4.000000000e+03f;
    (*this).DisableInteractionOnThrowTime = 5.000000000e-01f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bStartWithTickEnabled = false;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
}

void AIGS_PickupActorBase::WakePhysics(bool inThrownPhysics) {
}

void AIGS_PickupActorBase::SleepPhysics() {
}

void AIGS_PickupActorBase::SetWasThrown(FVector inVelocity, bool bUseCameraPitch) {
}

void AIGS_PickupActorBase::SetShouldMove(bool inShouldMove) {
}

void AIGS_PickupActorBase::ResetPickup() {
}

void AIGS_PickupActorBase::Refresh() {
}

void AIGS_PickupActorBase::PlayThrowAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inThrowEvent) {
}

void AIGS_PickupActorBase::PlayPickupAkEvent(AIGS_GameCharacterFramework* inInstigator, UAkAudioEvent* inPickupEvent) {
}

void AIGS_PickupActorBase::OnRep_WasThrown() {
}

void AIGS_PickupActorBase::OnRep_ShouldMove() {
}







void AIGS_PickupActorBase::OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}

void AIGS_PickupActorBase::OnComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_PickupActorBase::Multicast_Pickup_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_PickupActorBase::Multicast_AddImpulse_Implementation(FVector inImpulse) {
}

void AIGS_PickupActorBase::InitPlayerOwner(AIGS_GameCharacterFramework* inOwner) {
}

void AIGS_PickupActorBase::InitMesh() {
}

void AIGS_PickupActorBase::HandleBotPickupOverlap(AActor* inActor) {
}

bool AIGS_PickupActorBase::GetWasThrown() {
    return false;
}

UIGS_InteractiveComponent* AIGS_PickupActorBase::GetInteractiveComponent() {
    return NULL;
}

FIGS_CommonItemData AIGS_PickupActorBase::GetCommonDataBP() {
    return FIGS_CommonItemData{};
}

void AIGS_PickupActorBase::AI_Use(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_PickupActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_PickupActorBase, bShouldMove);
    DOREPLIFETIME(AIGS_PickupActorBase, OwningPawn);
    DOREPLIFETIME(AIGS_PickupActorBase, mR_bWasThrown);
}


