#include "IGS_ContractsManagerComponent.h"
#include "Templates/SubclassOf.h"

UIGS_ContractsManagerComponent::UIGS_ContractsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_ContractsManagerComponent::WipeSave() {
}

void UIGS_ContractsManagerComponent::RemoveActiveContractMission(TSubclassOf<UMETA_MissionID> inMissionID) {
}


bool UIGS_ContractsManagerComponent::IsContractActivated(TSubclassOf<UIGS_ContractID> inID) {
    return false;
}




void UIGS_ContractsManagerComponent::AddAvailableContract(TSubclassOf<UIGS_ContractID> inID) {
}

void UIGS_ContractsManagerComponent::AddActiveContract(TSubclassOf<UIGS_ContractID> inID) {
}


