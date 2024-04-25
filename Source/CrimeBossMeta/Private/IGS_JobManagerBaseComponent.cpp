#include "IGS_JobManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_JobManagerBaseComponent::UIGS_JobManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_JobManagerBaseComponent::StartCurrentJob_Implementation(EMETA_JobForceResult inExpectedResult) {
    return false;
}

void UIGS_JobManagerBaseComponent::StartAmbush_Implementation(TSubclassOf<UMETA_MissionID> inAmbushMissionID, EMETA_AmbushStartMethod inStartMethod, FMETA_PreviousMissionData inPreviousMissionData) {
}

bool UIGS_JobManagerBaseComponent::SetCurrentJob_Implementation(UMETA_BaseMission* inMetaMissionID) {
    return false;
}

void UIGS_JobManagerBaseComponent::SetAmountOfSoldiersForIntelMission_Implementation(int32 inAmount, bool& WasSet) {
}

void UIGS_JobManagerBaseComponent::SelectIntelGatheringMissionByInstigator_Implementation(UMETA_BaseMission* inInstigatorMissionID, bool& WasSelected) {
}

void UIGS_JobManagerBaseComponent::ResetCurrentJob_Implementation() {
}

bool UIGS_JobManagerBaseComponent::RemoveCharacterFromCurrentJob_Implementation(UMETA_Character* inCharacter) {
    return false;
}

bool UIGS_JobManagerBaseComponent::IsThereJobAboutToExpire_Implementation() {
    return false;
}

bool UIGS_JobManagerBaseComponent::IsCurrentJobValid_Implementation() {
    return false;
}

void UIGS_JobManagerBaseComponent::InitTradeDealSell_Implementation(EMETA_TradeVendor inVendor, FGameplayTag inLootTag, int32 inLootAmount, bool& WasCreated) {
}

int32 UIGS_JobManagerBaseComponent::GetPoliceAmbushChance_Implementation(FMETA_PreviousMissionData inPrevMissionData) {
    return 0;
}

EMETA_Heat UIGS_JobManagerBaseComponent::GetPlayerHeat_Implementation(FMETA_FPSMissionInfo inMissionInfo) {
    return EMETA_Heat::INVALID;
}

void UIGS_JobManagerBaseComponent::GetObjectivesResult_Implementation(UMETA_BaseMission* inMissionID, EMETA_ObjectiveState& outMissionSuccess, EMETA_ObjectiveState& outCleanExecution, EMETA_ObjectiveState& outBonusObjective) {
}

UMETA_Character* UIGS_JobManagerBaseComponent::GetHeisterBeingRescuedOnMission_Implementation(TSubclassOf<UMETA_MissionID> inMissionID) {
    return NULL;
}

UMETA_BaseGoal* UIGS_JobManagerBaseComponent::GetGoalRelatedToMission_Implementation(TSubclassOf<UMETA_MissionID> inMissionID) {
    return NULL;
}

int32 UIGS_JobManagerBaseComponent::GetGangsAmbushChance_Implementation(FMETA_PreviousMissionData inPrevMissionData) {
    return 0;
}

int32 UIGS_JobManagerBaseComponent::GetDayOfSpawn_Implementation(TSubclassOf<UMETA_MissionID> inMissionID) {
    return 0;
}

UMETA_BaseMission* UIGS_JobManagerBaseComponent::GetCurrentJobInfo_Implementation(bool& outValid) {
    return NULL;
}

TArray<UMETA_BaseMission*> UIGS_JobManagerBaseComponent::GetAllJobs_Implementation() {
    return TArray<UMETA_BaseMission*>();
}

void UIGS_JobManagerBaseComponent::DoGatheringIntelForCurrentJob_Implementation() {
}

UMETA_BaseMission* UIGS_JobManagerBaseComponent::DEBUG_CreateMission_Implementation(TSubclassOf<UMETA_MissionID> inMissionID) {
    return NULL;
}

void UIGS_JobManagerBaseComponent::ClearCharactersFromCurrentJob_Implementation(TArray<UMETA_Character*>& outAssignedCharacters) {
}

bool UIGS_JobManagerBaseComponent::CanMissionHaveObjectives_Implementation(UMETA_BaseMission* inMissionID) {
    return false;
}

bool UIGS_JobManagerBaseComponent::CanJobBeStarted_Implementation(UMETA_BaseMission* inMetaMission, EMETA_JobStartRejectionReason& outRejectionReason) {
    return false;
}

float UIGS_JobManagerBaseComponent::CalculateTotalBagsForMission_Implementation(UMETA_BaseFPSMission* inMission) {
    return 0.0f;
}

void UIGS_JobManagerBaseComponent::AddJob_Implementation(UMETA_BaseMission* NewJob, TSubclassOf<UMETA_BaseGoal> inGoalID) {
}

bool UIGS_JobManagerBaseComponent::AddCharacterToCurrentJob_Implementation(UMETA_Character* inCharacter) {
    return false;
}


