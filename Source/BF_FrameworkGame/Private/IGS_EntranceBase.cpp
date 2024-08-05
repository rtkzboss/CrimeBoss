#include "IGS_EntranceBase.h"
#include "IGS_ObjectStatus.h"
#include "IGS_VisbilityComponent.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_EntranceBase::AIGS_EntranceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).EntranceRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EntranceRootComponent"));
    (*this).DoorObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("DoorObjectStatus"));
    (*this).VisibilityComponent = CreateDefaultSubobject<UIGS_VisbilityComponent>(TEXT("VisibilityComponent"));
    (*this).FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    (*this).BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    (*this).bFullyProgressed = true;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)EntranceRootComponent;
    (*this).FrontBreachingPoints->SetupAttachment((*this).EntranceRootComponent);
    (*this).BackBreachingPoints->SetupAttachment((*this).EntranceRootComponent);
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


