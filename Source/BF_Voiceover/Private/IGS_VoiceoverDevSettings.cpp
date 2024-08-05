#include "IGS_VoiceoverDevSettings.h"

UIGS_VoiceoverDevSettings::UIGS_VoiceoverDevSettings() {
    (*this).DialogueHeisterCharacterDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/ComponentsData/DT_HeisterCharactersData.DT_HeisterCharactersData"), TEXT(""));
    (*this).DialogueHeisterCooldownDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/ComponentsData/DT_CharacterCooldownDefinitions.DT_CharacterCooldownDefinitions"), TEXT(""));
    (*this).VoiceoverSubsystemDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/ComponentsData/DA_VoiceoverSubsystemData.DA_VoiceoverSubsystemData"), TEXT(""));
    (*this).LevelDialoguesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/Mission/DT_LevelDialogues.DT_LevelDialogues"), TEXT(""));
    (*this).LevelLinesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/Mission/DT_LevelLines.DT_LevelLines"), TEXT(""));
    (*this).MetaDialoguePlayAkEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Voice/AKE_MetaVO_Play.AKE_MetaVO_Play"), TEXT(""));
    (*this).MetaDialogueSystemDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/ComponentsData/DA_MetaDialogueSubsystemData.DA_MetaDialogueSubsystemData"), TEXT(""));
    (*this).MetaCutsceneLevelLinesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/Meta/DT_LevelLines.DT_LevelLines"), TEXT(""));
    (*this).MetaCutsceneLevelDialoguesDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Audio/Voiceovers/Meta/DT_LevelDialogues.DT_LevelDialogues"), TEXT(""));
}


