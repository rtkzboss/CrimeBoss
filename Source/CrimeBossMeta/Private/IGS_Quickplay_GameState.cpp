#include "IGS_Quickplay_GameState.h"
#include "IGS_SubtitleManager.h"

AIGS_Quickplay_GameState::AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuickPlayData = NULL;
    this->EconomyQuickData = NULL;
    this->SubtitleManager = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager"));
}





