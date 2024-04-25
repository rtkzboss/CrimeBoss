#include "META_JobManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_JobManagerComponent::UMETA_JobManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentJob = NULL;
    this->JobsCompletedAmount = 0;
    this->CurrentJobExecutionShouldBeOverriden = false;
    this->CrewUsageAfterMission = EMETA_UsingCrewInGraph::TemporaryCrew;
    this->AmountOfSoldiersWereSentForGatheringIntel = 0;
}

void UMETA_JobManagerComponent::RemoveJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag) {
}

void UMETA_JobManagerComponent::RemoveAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID) {
}

bool UMETA_JobManagerComponent::IsThereParametersForJobInStorage(const TSubclassOf<UMETA_MissionID>& inJobID) const {
    return false;
}


int32 UMETA_JobManagerComponent::GetJobParameterFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, bool& bOutSuccess) {
    return 0;
}


TMap<FGameplayTag, int32> UMETA_JobManagerComponent::GetAllJobParametersFromStorage(const TSubclassOf<UMETA_MissionID>& inJobID, bool bFlushAfterGet) {
    return TMap<FGameplayTag, int32>();
}

void UMETA_JobManagerComponent::ChangeJobParameterInStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 inChangeByValue) {
}

void UMETA_JobManagerComponent::AddJobParameterToStorage(const TSubclassOf<UMETA_MissionID>& inJobID, const FGameplayTag& inTag, int32 InValue) {
}


