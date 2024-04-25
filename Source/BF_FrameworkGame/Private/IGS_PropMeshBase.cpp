#include "IGS_PropMeshBase.h"
#include "Net/UnrealNetwork.h"

UIGS_PropMeshBase::UIGS_PropMeshBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->mR_SpawnedIndex = -1;
}

void UIGS_PropMeshBase::OnRep_Spawned() {
}

void UIGS_PropMeshBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_PropMeshBase, mR_SpawnedIndex);
}


