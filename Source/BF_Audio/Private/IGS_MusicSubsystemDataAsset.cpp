#include "IGS_MusicSubsystemDataAsset.h"

UIGS_MusicSubsystemDataAsset::UIGS_MusicSubsystemDataAsset() {
    this->MusicPauseAkEvent = NULL;
    this->MusicResumeAkEvent = NULL;
    this->MusicSongPlayAkEvent = NULL;
    this->MusicSongStopAkEvent = NULL;
    this->MusicScenicPlayAkEvent = NULL;
    this->MusicScenicStopAkEvent = NULL;
    this->GameStageNoneAkState = NULL;
    this->GameStageVideoAkState = NULL;
    this->GameStageMainMenuAkState = NULL;
    this->GameStageMultiplayerMenuAkState = NULL;
    this->GameStageMetaAkState = NULL;
    this->GameStageLobbyAkState = NULL;
    this->GameStageLoadingAkState = NULL;
    this->GameStageMissionAkState = NULL;
    this->GameStageStarterMapAkState = NULL;
    this->LevelStartAkEvent = NULL;
    this->LevelEndAkEvent = NULL;
    this->Strike1AkEvent = NULL;
    this->Strike2AkEvent = NULL;
    this->Strike3AkEvent = NULL;
    this->CombatPhaseAkEvent = NULL;
    this->ControlPhaseAkEvent = NULL;
    this->Assault1PhaseAkEvent = NULL;
    this->DefaultMissionAkState = NULL;
    this->NoneMissionAkState = NULL;
    this->NoMusicAkState = NULL;
    this->Stealth1AkState = NULL;
    this->Stealth2AkState = NULL;
    this->CombatAkState = NULL;
    this->ControlAkState = NULL;
    this->Assault1AkState = NULL;
    this->Assault2AkState = NULL;
    this->BlackscreenStealthAkState = NULL;
    this->BlackscreenAssaultAkState = NULL;
    this->BlackscreenControlAkState = NULL;
    this->BlackscreenAkStateChangeTime = 3.00f;
    this->CutsceneAkState = NULL;
    this->Custom1AkState = NULL;
    this->Custom2AkState = NULL;
    this->Custom3AkState = NULL;
    this->Custom4AkState = NULL;
    this->CustomSilenceAkState = NULL;
    this->CustomFadeInAkState = NULL;
    this->CustomStealthTensionAkState = NULL;
    this->CustomBuildUpActionAkState = NULL;
    this->CustomActionAkState = NULL;
    this->CustomFadeOutAkState = NULL;
    this->CutsceneNoMusicAkState = NULL;
    this->CutsceneNoSoundAkState = NULL;
}


