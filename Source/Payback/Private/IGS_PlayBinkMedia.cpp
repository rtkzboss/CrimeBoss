#include "IGS_PlayBinkMedia.h"

UIGS_PlayBinkMedia::UIGS_PlayBinkMedia() {
    this->BinkMediaWidget = NULL;
    this->m_ScreenHandler = NULL;
}

void UIGS_PlayBinkMedia::StopMovie() {
}

void UIGS_PlayBinkMedia::SkipMovie() {
}

void UIGS_PlayBinkMedia::SetVolume(float InValue) {
}

void UIGS_PlayBinkMedia::PlayMedia() {
}

UIGS_PlayBinkMedia* UIGS_PlayBinkMedia::PlayBinkMedia(UObject* inWCO, UBinkMediaPlayer* inBinkMediaPlayer, bool inAutoStart, bool inAddToScreenHandler) {
    return NULL;
}

void UIGS_PlayBinkMedia::OnWidgetSkipTriggered() {
}

void UIGS_PlayBinkMedia::OnMediaReachedEnd() {
}

void UIGS_PlayBinkMedia::OnLevelLoadStarted(FName inLevelName, bool inIsServerTravel) {
}

UBinkMediaTexture* UIGS_PlayBinkMedia::GetMediaTexture() {
    return NULL;
}

FTimespan UIGS_PlayBinkMedia::GetElapsedTime() {
    return FTimespan{};
}

FTimespan UIGS_PlayBinkMedia::GetDuration() {
    return FTimespan{};
}

FBinkSubtitleItem UIGS_PlayBinkMedia::GetCurrentSubtitleItem() {
    return FBinkSubtitleItem{};
}


