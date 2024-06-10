#include "IGS_PaybackDevSettings.h"

UIGS_PaybackDevSettings::UIGS_PaybackDevSettings() {
    (*this).AssetsPreloaderDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/DA_AssetsPreloaderData.DA_AssetsPreloaderData"), TEXT(""));
    (*this).CharacterPosesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MetaGame/Cutscenes/Tables/DT_CutsceneCharacterPose.DT_CutsceneCharacterPose"), TEXT(""));
    (*this).MetaCutscenesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Cutscenes/Meta/DT_MetaCutscenes.DT_MetaCutscenes"), TEXT(""));
    (*this).CutsceneSubsystemDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Core/Tables/Cutscenes/DA_CutsceneSubsystemData.DA_CutsceneSubsystemData"), TEXT(""));
}


