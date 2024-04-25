#include "IGS_PlayMetaCutscene.h"

UIGS_PlayMetaCutscene::UIGS_PlayMetaCutscene() {
}

UIGS_PlayMetaCutscene* UIGS_PlayMetaCutscene::PlayMetaCutscene(UObject* inWCO, FText inCutsceneID, FText inDebugText, TMap<FGameplayTag, FIGS_CutsceneTagValue> inTagParams, FIGS_MetaCutsceneCharacters inCharacters, bool inAutoStart) {
    return NULL;
}

void UIGS_PlayMetaCutscene::OnCutsceneUnloaded(FName inCutsceneID) {
}

void UIGS_PlayMetaCutscene::OnCutsceneStarted(FName inCutsceneID, FIGS_MetaCutsceneResults inResults) {
}

void UIGS_PlayMetaCutscene::OnCutsceneLoaded(FName inCutsceneID) {
}

void UIGS_PlayMetaCutscene::OnCutsceneFinished(FName inCutsceneID, FIGS_MetaCutsceneResults inResult) {
}

void UIGS_PlayMetaCutscene::LoadCutscene(FName inCutsceneID) {
}


