#include "META_CrewManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_CrewManagerComponent::UMETA_CrewManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RemainAmountOfCompletedMissionsBeforeUnlock = 0;
}

void UMETA_CrewManagerComponent::SetCharacterPlotlineCompleted(FGameplayTag inCharacter) {
}

void UMETA_CrewManagerComponent::SaveCharacterMissionStatus(FGameplayTag inCharacter, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inResult) {
}

void UMETA_CrewManagerComponent::ResetCharacterPlotlineProgressForCharacter(FGameplayTag inCharacter) {
}

void UMETA_CrewManagerComponent::ResetActiveGenericVariants() {
}

bool UMETA_CrewManagerComponent::IsHeisterRemovedFromCampaign(EIGS_CharacterID inCharacterID) const {
    return false;
}

TArray<EIGS_CharacterID> UMETA_CrewManagerComponent::GetUniqueCharactersAvailableForGeneration(bool inIncludeCharacterMissions) const {
    return TArray<EIGS_CharacterID>();
}

void UMETA_CrewManagerComponent::GetCharacterMissionProgressForCharacter(FGameplayTag inCharacter, bool& outFound, FIGS_CharacterMissionProgress& outMissionProgress) const {
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByTagID(FGameplayTag inCharacterTagID, bool inIsTemporary, bool inForceIgnoreLock) {
    return NULL;
}

UMETA_Character* UMETA_CrewManagerComponent::CreateUniqueCharacterByID(EIGS_CharacterID inCharacterID, bool inIsTemporary, bool inForceIgnoreLock) {
    return NULL;
}

TArray<UMETA_Character*> UMETA_CrewManagerComponent::CalculateStartingHeistersBonus() {
    return TArray<UMETA_Character*>();
}


