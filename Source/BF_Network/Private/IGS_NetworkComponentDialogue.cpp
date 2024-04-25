#include "IGS_NetworkComponentDialogue.h"

UIGS_NetworkComponentDialogue::UIGS_NetworkComponentDialogue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideCharacterAkSwitch = NULL;
    this->ComponentData = NULL;
}

void UIGS_NetworkComponentDialogue::StopVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

void UIGS_NetworkComponentDialogue::Set2DModeEnabled(bool inState) {
}

void UIGS_NetworkComponentDialogue::PlayVoice(const FIGS_PlayVariationData& inPlayVariationData) {
}

bool UIGS_NetworkComponentDialogue::IsPlayingVoice(int32 inGroupID, const FIGS_DialogueGroupCharacterHolder& inCharacter) {
    return false;
}

float UIGS_NetworkComponentDialogue::GetVoiceProgress(int32 inGroupID) {
    return 0.0f;
}

void UIGS_NetworkComponentDialogue::All_ResetVoiceSGX_Implementation(uint16 inGroupID) {
}

void UIGS_NetworkComponentDialogue::All_OnStopVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}

void UIGS_NetworkComponentDialogue::All_OnPlayVoice_Implementation(FIGS_PlayVariationData inPlayVariationData) {
}


