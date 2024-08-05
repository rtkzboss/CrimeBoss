#include "IGS_MetaCutsceneFunctionLibrary.h"

UIGS_MetaCutsceneFunctionLibrary::UIGS_MetaCutsceneFunctionLibrary() {
}

void UIGS_MetaCutsceneFunctionLibrary::RefreshCutsceneID(FIGS_MetaCutsceneDataRow& inCutsceneRow) {
}

EIGS_MetaDialogueCharacter UIGS_MetaCutsceneFunctionLibrary::GetMetaCharacterFromSpeaker(const FIGS_MetaCutsceneCharacters& inCharacterParameters, EIGS_MetaDialogueSpeaker inSpeaker) {
    return EIGS_MetaDialogueCharacter::None;
}

UDataTable* UIGS_MetaCutsceneFunctionLibrary::GetCutsceneDatabase() {
    return NULL;
}

TArray<ULevelStreaming*> UIGS_MetaCutsceneFunctionLibrary::GetAllStreamedLevel(UObject* inWCO) {
    return TArray<ULevelStreaming*>();
}

FIGS_EditorCutsceneInfo UIGS_MetaCutsceneFunctionLibrary::GetAllDialoguesForCutscene(UObject* inWCO, UIGS_MetaCutsceneDataAsset* inCutsceneData, FIGS_MetaCutsceneCharacters inCharacterParameters) {
    return FIGS_EditorCutsceneInfo{};
}


