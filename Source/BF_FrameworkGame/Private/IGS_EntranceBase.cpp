#include "IGS_EntranceBase.h"
#include "IGS_ObjectStatus.h"
#include "IGS_VisbilityComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_EntranceBase::AIGS_EntranceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EntranceRootComponent"));
    this->EntranceRootComponent = (USceneComponent*)RootComponent;
    this->DoorObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("DoorObjectStatus"));
    this->VisibilityComponent = CreateDefaultSubobject<UIGS_VisbilityComponent>(TEXT("VisibilityComponent"));
    this->FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    this->BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    this->bPortalDoor = false;
    this->bLocked = false;
    this->bOpen = false;
    this->bFullyProgressed = true;
    this->NavigationBlock = NULL;
    this->FrontBreachingPoints->SetupAttachment(RootComponent);
    this->BackBreachingPoints->SetupAttachment(RootComponent);
}

void AIGS_EntranceBase::SetOpenState(bool inOpen) {
}

void AIGS_EntranceBase::SetIsLocked(bool inLocked) {
}

void AIGS_EntranceBase::SetFullyProgressed(bool inFullyProgressed) {
}

void AIGS_EntranceBase::OnRep_bOpen() {
}

void AIGS_EntranceBase::OnRep_bLocked() {
}





void AIGS_EntranceBase::Multicast_OnOpenStateChanged_Implementation(bool inOpen) {
}

bool AIGS_EntranceBase::GetOpenState() {
    return false;
}

bool AIGS_EntranceBase::GetIsLocked_Implementation() const {
    return false;
}

bool AIGS_EntranceBase::GetIsBroken() const {
    return false;
}

bool AIGS_EntranceBase::GetFullyProgressed() {
    return false;
}

bool AIGS_EntranceBase::GetDoorOrientationFromLocation(FVector InLocation) {
    return false;
}

bool AIGS_EntranceBase::GetDoorOrientationFromDirection(FVector InDirection) {
    return false;
}

void AIGS_EntranceBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_EntranceBase, bLocked);
    DOREPLIFETIME(AIGS_EntranceBase, bOpen);
    DOREPLIFETIME(AIGS_EntranceBase, bFullyProgressed);
}


