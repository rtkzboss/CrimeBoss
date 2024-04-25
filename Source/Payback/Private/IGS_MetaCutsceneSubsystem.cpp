#include "IGS_MetaCutsceneSubsystem.h"

UIGS_MetaCutsceneSubsystem::UIGS_MetaCutsceneSubsystem() {
    this->Data = NULL;
    this->CutsceneData = NULL;
    this->EnviromentLevel = NULL;
    this->SetupLevel = NULL;
}

void UIGS_MetaCutsceneSubsystem::StartCutscene() {
}

void UIGS_MetaCutsceneSubsystem::SkipCutsceneDialogueLine() {
}

void UIGS_MetaCutsceneSubsystem::SkipCutsceneDialogue() {
}

void UIGS_MetaCutsceneSubsystem::ShowOptions(float inTimeToSelect) {
}

void UIGS_MetaCutsceneSubsystem::SetTagsValues(TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagsValues) {
}

void UIGS_MetaCutsceneSubsystem::SetSkipDialogueLineEnabled(bool inState) {
}

void UIGS_MetaCutsceneSubsystem::SetForceChoiceResult(EIGS_MetaCutsceneNodeAction inResult) {
}

void UIGS_MetaCutsceneSubsystem::SetFinishDelay(float inFinishDelay) {
}

void UIGS_MetaCutsceneSubsystem::SetEndDelay(float inEndDelay) {
}

void UIGS_MetaCutsceneSubsystem::SetDebugEnabled(bool inState) {
}

void UIGS_MetaCutsceneSubsystem::SetDebugContinueEnabled(bool inState) {
}

void UIGS_MetaCutsceneSubsystem::SetAutoFinishEnabled(bool inState) {
}

void UIGS_MetaCutsceneSubsystem::SelectOption(int32 inOption) {
}

void UIGS_MetaCutsceneSubsystem::PlayCurrentNodeOptionEndDialogue(int32 inOption) {
}

void UIGS_MetaCutsceneSubsystem::PlayCurrentNodeDialogue() {
}

void UIGS_MetaCutsceneSubsystem::OnSetupLevelUnloaded() {
}

void UIGS_MetaCutsceneSubsystem::OnSetupLevelLoaded() {
}

void UIGS_MetaCutsceneSubsystem::OnOriginalSublevelHidden() {
}

void UIGS_MetaCutsceneSubsystem::OnEnvironmentLevelUnloaded() {
}

void UIGS_MetaCutsceneSubsystem::OnEnvironmentLevelLoaded() {
}

void UIGS_MetaCutsceneSubsystem::OnDialogueStarted() {
}

void UIGS_MetaCutsceneSubsystem::OnDialogueLevelPreloaded() {
}

void UIGS_MetaCutsceneSubsystem::OnDialogueFinished() {
}

void UIGS_MetaCutsceneSubsystem::OnDialogueDatabasesLoaded() {
}

void UIGS_MetaCutsceneSubsystem::OnAdditionalPropsLoaded() {
}

void UIGS_MetaCutsceneSubsystem::OnAdditionalLevelUnloaded() {
}

void UIGS_MetaCutsceneSubsystem::OnAdditionalLevelLoaded() {
}

void UIGS_MetaCutsceneSubsystem::LoadCutscene(FName inCutsceneID, FText inDebugText, FIGS_MetaCutsceneCharacters inCharacters) {
}

bool UIGS_MetaCutsceneSubsystem::IsSkipCutsceneDialogueActivated() const {
    return false;
}

bool UIGS_MetaCutsceneSubsystem::IsDatabaseLoaded() const {
    return false;
}

bool UIGS_MetaCutsceneSubsystem::IsCutscenePreloaded() const {
    return false;
}

bool UIGS_MetaCutsceneSubsystem::HasCurrentNodeOptions() {
    return false;
}

TMap<FGameplayTag, FIGS_CutsceneTagValue> UIGS_MetaCutsceneSubsystem::GetTagsValues() const {
    return TMap<FGameplayTag, FIGS_CutsceneTagValue>();
}

TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>> UIGS_MetaCutsceneSubsystem::GetSlotCharactersPaperDoll() {
    return TArray<TSoftClassPtr<AIGS_CharacterPaperDoll>>();
}

FName UIGS_MetaCutsceneSubsystem::GetEndSequenceName(int32 inOption) {
    return NAME_None;
}

EIGS_MetaDialogueCharacter UIGS_MetaCutsceneSubsystem::GetDialogueSlotCharacter(EIGS_MetaDialogueCharacterSlot inDialogueSlot) {
    return EIGS_MetaDialogueCharacter::None;
}

EIGS_MetaDialogueCharacterSlot UIGS_MetaCutsceneSubsystem::GetDialogueSlot(EIGS_MetaDialogueCharacterSlot inCutsceneSlot) {
    return EIGS_MetaDialogueCharacterSlot::None;
}

UIGS_CutsceneSubsystemDataAsset* UIGS_MetaCutsceneSubsystem::GetCutsceneSubsystemDataAsset() const {
    return NULL;
}

EIGS_CutsceneState UIGS_MetaCutsceneSubsystem::GetCutsceneState() const {
    return EIGS_CutsceneState::Unloaded;
}

EIGS_MetaDialogueCharacter UIGS_MetaCutsceneSubsystem::GetCutsceneSlotCharacter(EIGS_MetaDialogueCharacterSlot inCutsceneSlot) {
    return EIGS_MetaDialogueCharacter::None;
}

EIGS_MetaDialogueCharacterSlot UIGS_MetaCutsceneSubsystem::GetCutsceneSlot(EIGS_MetaDialogueCharacterSlot inDialogueSlot) {
    return EIGS_MetaDialogueCharacterSlot::None;
}

TSoftObjectPtr<UIGS_MetaCutsceneDataAsset> UIGS_MetaCutsceneSubsystem::GetCutsceneDataAsset(UObject* inWCO, FText inCutsceneID) {
    return NULL;
}

float UIGS_MetaCutsceneSubsystem::GetCurrentNodeSkipTime() const {
    return 0.0f;
}

UIGS_MetaCutsceneDataAsset* UIGS_MetaCutsceneSubsystem::GetCurrentCutsceneDataAsset() const {
    return NULL;
}

FIGS_MetaCutsceneCharacterPoseData UIGS_MetaCutsceneSubsystem::GetCharacterSlotPose(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets) {
    return FIGS_MetaCutsceneCharacterPoseData{};
}

FIGS_MetaCutsceneCharacterPoseData UIGS_MetaCutsceneSubsystem::GetCharacterPose(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet, EIGS_MetaCutsceneCharacterPose InPose) {
    return FIGS_MetaCutsceneCharacterPoseData{};
}

TArray<FIGS_MetaCutsceneDataRow> UIGS_MetaCutsceneSubsystem::GetAllCutscenesData(UObject* inWCO) {
    return TArray<FIGS_MetaCutsceneDataRow>();
}

FIGS_MetaCutscenePoseSet UIGS_MetaCutsceneSubsystem::GetAllCharacterSlotPoses(EIGS_MetaDialogueCharacterSlot inSlot, FGameplayTagContainer inPoseSets) {
    return FIGS_MetaCutscenePoseSet{};
}

FIGS_MetaCutscenePoseSet UIGS_MetaCutsceneSubsystem::GetAllCharacterPoses(EIGS_MetaDialogueCharacter inCharacter, FGameplayTag inCharacterPoseSet) {
    return FIGS_MetaCutscenePoseSet{};
}

void UIGS_MetaCutsceneSubsystem::FinishCutscene() {
}

void UIGS_MetaCutsceneSubsystem::AllowPoseSet(FGameplayTag inPoseSet) {
}


