#include "IGS_MetaDialogueSubsystem.h"

UIGS_MetaDialogueSubsystem::UIGS_MetaDialogueSubsystem() {
    this->Data = NULL;
    this->SubtitleManager = NULL;
    this->AkActor = NULL;
    this->PlayMetaDialogueAkEvent = NULL;
}

void UIGS_MetaDialogueSubsystem::TriggerNextLine() {
}

void UIGS_MetaDialogueSubsystem::StopCurrentDialogue(bool inHideSubtitle) {
}

void UIGS_MetaDialogueSubsystem::ShowSubtitleForCutscene() {
}

void UIGS_MetaDialogueSubsystem::SetDelayForCurrentLine(float inDelaySeconds) {
}

void UIGS_MetaDialogueSubsystem::SetDebugEnabled(bool inState) {
}

void UIGS_MetaDialogueSubsystem::SetBlockState(bool inState, const FString& inReason) {
}

void UIGS_MetaDialogueSubsystem::SetAutoplayLineEnabled(bool inState) {
}

void UIGS_MetaDialogueSubsystem::HideSubtitleForCutscene() {
}

FIGS_MetaDialogueSpeakerVoiceLengthData UIGS_MetaDialogueSubsystem::GetDialogueLength(const TArray<FIGS_MetaDialogueTranscript>& inTranscript, const TMap<uint8, EIGS_MetaDialogueCharacter>& inCharacters) {
    return FIGS_MetaDialogueSpeakerVoiceLengthData{};
}

FIGS_MetaDialogueSpeakerVoiceLengthData UIGS_MetaDialogueSubsystem::GetCurrentSpeakerVoiceLength() {
    return FIGS_MetaDialogueSpeakerVoiceLengthData{};
}

EIGS_MetaDialogueCharacterSlot UIGS_MetaDialogueSubsystem::GetCurrentSpeakerSlot() const {
    return EIGS_MetaDialogueCharacterSlot::None;
}

EIGS_MetaDialogueSpeaker UIGS_MetaDialogueSubsystem::GetCurrentSpeaker() const {
    return EIGS_MetaDialogueSpeaker::None;
}

FIGS_MetaDialogueSpeakerVoiceLengthData UIGS_MetaDialogueSubsystem::GetCurrentDialogueLength() {
    return FIGS_MetaDialogueSpeakerVoiceLengthData{};
}

UAnimMontage* UIGS_MetaDialogueSubsystem::GetCurrentCharacterFacialAnimation() {
    return NULL;
}

bool UIGS_MetaDialogueSubsystem::GetBlockState(FString& OutReason) {
    return false;
}

void UIGS_MetaDialogueSubsystem::DEBUG_EnableTTSMedia(bool inState) {
}


