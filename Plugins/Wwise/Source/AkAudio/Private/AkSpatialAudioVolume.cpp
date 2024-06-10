#include "AkSpatialAudioVolume.h"
#include "Engine/Brush.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"
#include "AkSurfaceReflectorSetComponent.h"

AAkSpatialAudioVolume::AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SurfaceReflectorSet = CreateDefaultSubobject<UAkSurfaceReflectorSetComponent>(TEXT("SurfaceReflector"));
    (*this).LateReverb = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    (*this).Room = CreateDefaultSubobject<UAkRoomComponent>(TEXT("Room"));
    (*this).BrushColor.B = 255;
    (*this).BrushColor.G = 187;
    (*this).BrushColor.R = 109;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).SurfaceReflectorSet->SetupAttachment((*this).RootComponent);
    (*this).LateReverb->SetupAttachment((*this).RootComponent);
    (*this).Room->SetupAttachment((*this).RootComponent);
}


