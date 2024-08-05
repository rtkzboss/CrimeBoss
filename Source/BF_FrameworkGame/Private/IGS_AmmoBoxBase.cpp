#include "IGS_AmmoBoxBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_AmmoBoxBase::AIGS_AmmoBoxBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("RootComp"))) {
    (*this).InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    (*this).InitialBoxID = EIGS_AmmoBoxItem::BaseLarge;
    (*this).mR_BoxID = EIGS_AmmoBoxItem::BaseLarge;
    (*this).PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
    (*this).InteractiveComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_AmmoBoxBase::SetBox(EIGS_AmmoBoxItem inBoxID) {
}

void AIGS_AmmoBoxBase::OnRep_BoxIDChanged() {
}

void AIGS_AmmoBoxBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_AmmoBoxBase, mR_BoxID);
}


