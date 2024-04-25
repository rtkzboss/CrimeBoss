#include "META_MediaManagerComponent.h"

UMETA_MediaManagerComponent::UMETA_MediaManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DialogueSettings = NULL;
}

void UMETA_MediaManagerComponent::SubtractDaysForDelayedCutscenes() {
}

void UMETA_MediaManagerComponent::RemoveTextScreenFromQueue(FMETA_TextScreenUIData inTextScreenData) {
}

void UMETA_MediaManagerComponent::RemoveMovieFromQueue(FMETA_MovieUIData inMovieData) {
}

void UMETA_MediaManagerComponent::RemoveDialogueFromQueue(FMETA_DialogueUIData inDialogueData) {
}

void UMETA_MediaManagerComponent::RemoveCutsceneFromQueue(FMETA_CutsceneUIData inCutsceneData) {
}

void UMETA_MediaManagerComponent::RemoveAllDialoguesWithLowerPrio(FGameplayTag inScreenTag, int32 InPriority) {
}

void UMETA_MediaManagerComponent::RemoveAllDialoguesOfType(FGameplayTag inScreenTag, FGameplayTag inTypeTag) {
}

void UMETA_MediaManagerComponent::PlayMovieLatent_Implementation(FMETA_MovieUIData inMovieData) {
}

void UMETA_MediaManagerComponent::PlayCutsceneLatent_Implementation(FMETA_CutsceneUIData inCutsceneData) {
}

bool UMETA_MediaManagerComponent::IsAnyTextScreenPending() const {
    return false;
}


bool UMETA_MediaManagerComponent::IsAnyInstantCutscenePending() const {
    return false;
}

bool UMETA_MediaManagerComponent::IsAnyDelayedCutscenePending(EMETA_Partner inPartner) const {
    return false;
}

int32 UMETA_MediaManagerComponent::GetNumberOfInstantCutscenesPending() {
    return 0;
}

int32 UMETA_MediaManagerComponent::GetNumberOfDelayedCutscenesPending(EMETA_Partner inPartner) {
    return 0;
}

FMETA_DialogueUIData UMETA_MediaManagerComponent::GetHighestPrioQueuedDialogue(FGameplayTag inScreenTag, bool& outResult) {
    return FMETA_DialogueUIData{};
}

FMETA_TextScreenUIData UMETA_MediaManagerComponent::GetFirstQueuedTextScreen(bool& outResult) {
    return FMETA_TextScreenUIData{};
}

FMETA_MovieUIData UMETA_MediaManagerComponent::GetFirstQueuedMovie(bool& outResult) {
    return FMETA_MovieUIData{};
}

FMETA_CutsceneUIData UMETA_MediaManagerComponent::GetFirstQueuedInstantCutscene(bool& outResult) {
    return FMETA_CutsceneUIData{};
}

FMETA_DialogueUIData UMETA_MediaManagerComponent::GetFirstQueuedDialogue(FGameplayTag inScreenTag, bool& outResult) {
    return FMETA_DialogueUIData{};
}

FMETA_CutsceneUIData UMETA_MediaManagerComponent::GetFirstDelayedCutsceneForPartner(EMETA_Partner inPartner, bool& outResult) {
    return FMETA_CutsceneUIData{};
}

TArray<FMETA_CutsceneUIData> UMETA_MediaManagerComponent::GetExpiredCutscenes(bool& outResult) {
    return TArray<FMETA_CutsceneUIData>();
}

TArray<FMETA_CutsceneUIData> UMETA_MediaManagerComponent::GetCutscenesAboutToExpire(bool& outResult) {
    return TArray<FMETA_CutsceneUIData>();
}


