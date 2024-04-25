#include "IGS_AmmoBoxBase.h"
#include "Components/StaticMeshComponent.h"
#include "IGS_InteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_AmmoBoxBase::AIGS_AmmoBoxBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootComp"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    this->PickupSoundAkEvent = NULL;
    this->InteractiveComponent = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("Pickup Interaction"));
    this->InitialBoxID = EIGS_AmmoBoxItem::BaseLarge;
    this->mR_BoxID = EIGS_AmmoBoxItem::BaseLarge;
    this->InteractiveComponent->SetupAttachment(RootComponent);
}

void AIGS_AmmoBoxBase::SetBox(EIGS_AmmoBoxItem inBoxID) {
}

void AIGS_AmmoBoxBase::OnRep_BoxIDChanged() {
}

void AIGS_AmmoBoxBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_AmmoBoxBase, mR_BoxID);
}


