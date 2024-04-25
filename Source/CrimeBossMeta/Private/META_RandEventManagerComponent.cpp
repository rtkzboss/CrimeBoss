#include "META_RandEventManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_RandEventManagerComponent::UMETA_RandEventManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutscenesStartedCounter = 0;
    this->CutscenesFinishedCounter = 0;
    this->CooldownCounterForFuneralOfGenericHeisters = 0;
}

bool UMETA_RandEventManagerComponent::ShouldStateChangeBeNoted_Implementation(FMETA_HeisterStateChangeNote inNote) const {
    return false;
}

void UMETA_RandEventManagerComponent::RemoveEventForMissingHeister(FMETA_CharacterID inCharacterID) {
}

TArray<EMETA_CharacterState> UMETA_RandEventManagerComponent::GetStatesWhichChangesShouldBeNotedInHistory_Implementation() const {
    return TArray<EMETA_CharacterState>();
}

void UMETA_RandEventManagerComponent::GetNoteAboutLastChangeToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess) {
}

void UMETA_RandEventManagerComponent::GetNoteAboutLastChangeFromStateToState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inFromState, EMETA_CharacterState inToState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess) {
}

void UMETA_RandEventManagerComponent::GetNoteAboutLastChangeFromState(FMETA_CharacterID inCharacterID, EMETA_CharacterState inState, FMETA_HeisterStateChangeNote& outNote, bool& outSuccess) {
}

FMETA_CharacterID UMETA_RandEventManagerComponent::GetMissingHeisterForMission(TSubclassOf<UMETA_MissionID> inMissionID) const {
    return FMETA_CharacterID{};
}

FGameplayTag UMETA_RandEventManagerComponent::GetEventIdForMissingHeister(FMETA_CharacterID inCharacterID) const {
    return FGameplayTag{};
}

void UMETA_RandEventManagerComponent::GetEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData& outData, bool& outSuccess) const {
}

void UMETA_RandEventManagerComponent::DecrementMissingHeistersEventsDaysTimer(TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData>& outExpiredEvents) {
}

void UMETA_RandEventManagerComponent::AddStatesChangesNote(FMETA_CharacterID inCharacterID, FMETA_HeisterStateChangeNote inNote) {
}

void UMETA_RandEventManagerComponent::AddEventDataForMissingHeister(FMETA_CharacterID inCharacterID, FMETA_MissingHeisterEventData inData) {
}


