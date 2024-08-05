#include "IGS_DoorBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_DoorBase::AIGS_DoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bHasAcousticPortal = true;
}

void AIGS_DoorBase::UpdateDoorOrientation(AIGS_GameCharacterFramework* inCharacter) {
}


void AIGS_DoorBase::Unlock() {
}

void AIGS_DoorBase::SwitchPortalComponent(bool inOpened) {
}

void AIGS_DoorBase::SetHardLocked(bool inHardLocked) {
}


void AIGS_DoorBase::Relock() {
}


void AIGS_DoorBase::OpenPortalComponent(bool inState) {
}


void AIGS_DoorBase::OpenDoor(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_DoorBase::OnRep_HardLock() {
}



void AIGS_DoorBase::Lock() {
}


void AIGS_DoorBase::ForceChangeDoorOpenState(FVector inInstigatorLocation, bool inOpen) {
}

void AIGS_DoorBase::EnableNavigationBlockingOnCollision(UShapeComponent* InComponent, bool inEnabled) {
}



void AIGS_DoorBase::CloseDoor() {
}

void AIGS_DoorBase::CallDoorOpened(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_DoorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_DoorBase, bDoorDirection);
    DOREPLIFETIME(AIGS_DoorBase, m_bHardLock);
}


