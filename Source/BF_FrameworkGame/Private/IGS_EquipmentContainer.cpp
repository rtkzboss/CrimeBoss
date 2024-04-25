#include "IGS_EquipmentContainer.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_EquipmentContainer::AIGS_EquipmentContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupInteraction = NULL;
    this->EquipmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Equipment Mesh"));
    this->mR_bContainerEnabled = true;
    this->EquipmentToDrop = NULL;
    this->bRechargable = false;
    this->TimeUntilRecharge = 30.00f;
}


void AIGS_EquipmentContainer::OnRep_bContainerEnabled() {
}




void AIGS_EquipmentContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_EquipmentContainer, mR_bContainerEnabled);
}


