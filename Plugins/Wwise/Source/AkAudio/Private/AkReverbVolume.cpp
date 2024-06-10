#include "AkReverbVolume.h"
#include "Engine/Brush.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AkLateReverbComponent.h"

AAkReverbVolume::AAkReverbVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bEnabled_DEPRECATED = true;
    (*this).SendLevel_DEPRECATED = 1.000000000e+00f;
    (*this).FadeRate_DEPRECATED = 5.000000000e-01f;
    (*this).Priority_DEPRECATED = 1.000000000e+00f;
    (*this).LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
    (*this).BrushColor.B = 255;
    (*this).BrushColor.G = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).LateReverbComponent->SetupAttachment((*this).RootComponent);
}


