#include "IGS_EquipmentContainer.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_EquipmentContainer::AIGS_EquipmentContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).EquipmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Equipment Mesh"));
    (*this).mR_bContainerEnabled = true;
    (*this).TimeUntilRecharge = 3.000000000e+01f;
}


void AIGS_EquipmentContainer::OnRep_bContainerEnabled() {
}




void AIGS_EquipmentContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_EquipmentContainer, mR_bContainerEnabled);
}


