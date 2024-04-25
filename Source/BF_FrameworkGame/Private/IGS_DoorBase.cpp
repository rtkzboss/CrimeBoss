#include "IGS_DoorBase.h"
#include "Net/UnrealNetwork.h"

AIGS_DoorBase::AIGS_DoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AcousticPortalInitState = AkAcousticPortalState::Closed;
    this->bHasAcousticPortal = true;
    this->bDoorDirection = false;
    this->bStartOpen = false;
    this->bFlipStartingRotation = false;
    this->bStartLocked = false;
    this->bOpenableFromBack = false;
    this->bUnlockFromBack = false;
    this->bStartHardLocked = false;
    this->bStartAsStatic = false;
    this->bDontBreachOpen = false;
    this->DoorLink = NULL;
    this->DoorTier = EIGS_DoorTier::DT_Tier1;
    this->bRammable = false;
    this->bTakesExplosiveDamage = false;
    this->bTakesPointDamage = false;
    this->bShootableLock = false;
    this->bPenetrable = false;
    this->bCanEnemiesOpenWhenLocked = false;
    this->m_bHardLock = false;
    this->m_bPreBreach = false;
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


