#include "IGS_MusicSubsystem.h"
#include "IGS_PersistentMusicAkComponent.h"

UIGS_MusicSubsystem::UIGS_MusicSubsystem() {
    this->PersistentMusicAkComponent = CreateDefaultSubobject<UIGS_PersistentMusicAkComponent>(TEXT("PersistentMusicAkComp"));
    this->Data = NULL;
}

void UIGS_MusicSubsystem::SetStoryMissionMusicState(EIGS_MusicStoryMissionState inState) {
}

void UIGS_MusicSubsystem::SetScenicMusicPack(UAkStateValue* inMusicPack) {
}

void UIGS_MusicSubsystem::SetPauseMusic(UObject* inWCO, bool inState) {
}

void UIGS_MusicSubsystem::SetMusicSongPlaylist(UObject* inWCO, TArray<UIGS_MusicSongDataAsset*> inPlaylist) {
}

void UIGS_MusicSubsystem::SetMusicScenicEnabled(bool inState) {
}

void UIGS_MusicSubsystem::SetMusicScenicAutoEnableState(EIGS_MusicMissionState inState) {
}

void UIGS_MusicSubsystem::SetMissionMusicState(EIGS_MusicMissionState inState) {
}

void UIGS_MusicSubsystem::SetAutoSwitchingEnable(bool inState) {
}

void UIGS_MusicSubsystem::OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

UIGS_PersistentMusicAkComponent* UIGS_MusicSubsystem::GetPersistentMusicAkComponent() {
    return NULL;
}

FString UIGS_MusicSubsystem::GetCurrerntMusicPack() const {
    return TEXT("");
}

void UIGS_MusicSubsystem::Debug_SetMusicPack(bool inPreviousPack) {
}


