#include "IGS_DialogueFunctionLibrary.h"

UIGS_DialogueFunctionLibrary::UIGS_DialogueFunctionLibrary() {
}

void UIGS_DialogueFunctionLibrary::StopHeisterDialogue(UObject* inWCO, FText inDialogueID) {
}

void UIGS_DialogueFunctionLibrary::StopDialogueOnCharacter(UObject* inWCO, FText inDialogueID, AActor* inCharacter) {
}

void UIGS_DialogueFunctionLibrary::StopAllDialogues(UObject* inWCO) {
}

FName UIGS_DialogueFunctionLibrary::GetLevelIDFromLineID(FName inLineID) {
    return NAME_None;
}

FName UIGS_DialogueFunctionLibrary::GetLevelID(FText inDialogueID) {
    return NAME_None;
}

EIGS_DialogueSpeaker UIGS_DialogueFunctionLibrary::GetDialogueSpeakerFromDialogueHolder(FIGS_DialogueGroupCharacterHolder inHolder) {
    return EIGS_DialogueSpeaker::None;
}

FText UIGS_DialogueFunctionLibrary::GetDialogueID(const FString& inDialogueID) {
    return FText::GetEmpty();
}

FIGS_DialogueGroupCharacterHolder UIGS_DialogueFunctionLibrary::CreateUniCharacterHolder(EIGS_DialogueUniCharacter inCharacter) {
    return FIGS_DialogueGroupCharacterHolder{};
}

FIGS_DialogueGroupCharacterHolder UIGS_DialogueFunctionLibrary::CreateSwatCharacterHolder(EIGS_DialogueSwatCharacter inCharacter) {
    return FIGS_DialogueGroupCharacterHolder{};
}

FIGS_DialogueGroupCharacterHolder UIGS_DialogueFunctionLibrary::CreateHeisterCharacterHolder(EIGS_DialogueHeisterCharacter inCharacter) {
    return FIGS_DialogueGroupCharacterHolder{};
}

void UIGS_DialogueFunctionLibrary::ComputeMissionDialoguesVoices(FName inLevelName, FIGS_DialogueGroupCharacterHolder inCharacter, int32& outNoVoiceCount, int32& outTTSVoice, int32& outTrueVoice) {
}

void UIGS_DialogueFunctionLibrary::ComputeMetaDialoguesVoices(FName inLevelName, EIGS_MetaDialogueCharacter inCharacter, int32& outNoVoiceCount, int32& outTTSVoice, int32& outTrueVoice) {
}


