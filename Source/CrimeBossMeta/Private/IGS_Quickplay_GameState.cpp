#include "IGS_Quickplay_GameState.h"
#include "IGS_SubtitleManager.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_Quickplay_GameState::AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SubtitleManager = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager"));
}





