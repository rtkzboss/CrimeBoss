#include "IGS_PaybackDefinitionsDevSettings.h"

UIGS_PaybackDefinitionsDevSettings::UIGS_PaybackDefinitionsDevSettings() {
    (*this).CoreMapsDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Maps/DA_CoreMaps.DA_CoreMaps"), TEXT(""));
    (*this).MetaBossLevelDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_BossLevelData.DA_BossLevelData"), TEXT(""));
    (*this).MetaCommonDataDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_MetaData.DA_MetaData"), TEXT(""));
    (*this).MetaDebugDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_MetaDebugData.DA_MetaDebugData"), TEXT(""));
    (*this).MetaGraphsDataAsset = nullptr;
    (*this).MetaTurfWarDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_TurfWarData.DA_TurfWarData"), TEXT(""));
    (*this).MetaVODialogueSettingsDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Maps/MetaGame/MetaMenu/MenuVoiceoverDialogues/DA_MetaVODialogueSettings.DA_MetaVODialogueSettings"), TEXT(""));
    (*this).MissionNamesDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_MissionNamesDatabase.DA_MissionNamesDatabase"), TEXT(""));
    (*this).GenericCharactersNamesDataAsset = FSoftObjectPath(TEXT("/Game/CrimeBossMeta/Resources/DA_GenericCharactersNames.DA_GenericCharactersNames"), TEXT(""));
}


