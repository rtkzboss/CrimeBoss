#include "IGS_DialogueSubsystem.h"

UIGS_DialogueSubsystem::UIGS_DialogueSubsystem() {
}

void UIGS_DialogueSubsystem::StopVoiceOnSpeaker(EIGS_DialogueSpeaker inSpeaker) const {
}

void UIGS_DialogueSubsystem::StopVoiceOnCharacter(AActor* inInstigator) const {
}

void UIGS_DialogueSubsystem::StopAllDialogues() {
}

void UIGS_DialogueSubsystem::SetSubsystemEnabled(bool inState) {
}

void UIGS_DialogueSubsystem::SetReminderDialogues(TArray<FText> inStealthDialogues, TArray<FText> inCombatDialogues) {
}

void UIGS_DialogueSubsystem::SetHeisterReminderTime(float InSeconds) {
}

void UIGS_DialogueSubsystem::SetBlacklistOption(EIGS_DialogueBlacklistOption inOption) {
}

void UIGS_DialogueSubsystem::SetBlacklistEnabled(bool inState) {
}

void UIGS_DialogueSubsystem::ResetSubsystem() {
}

void UIGS_DialogueSubsystem::PlayScriptedDialogue(FText inDialogueID, const TArray<AActor*>& inCharacters) {
}

void UIGS_DialogueSubsystem::PlayHeisterDialogue(FText inDialogueID) {
}

void UIGS_DialogueSubsystem::PlayFinalDialogue(FText inDialogueID, AActor* inCharacter) {
}

void UIGS_DialogueSubsystem::PlayDialogueOnCharacter(FText inDialogueID, AActor* inCharacter) {
}

void UIGS_DialogueSubsystem::OnGameLoadingFinished() {
}


