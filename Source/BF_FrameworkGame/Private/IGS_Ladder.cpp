#include "IGS_Ladder.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_LadderInteractiveComponent.h"

AIGS_Ladder::AIGS_Ladder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PlayerSnappingPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSnappingPoint"));
    (*this).HandAlignLocationOffset = 4.600000000e+01f;
    (*this).FirstTopStepOffset = 1.100000000e+01f;
    (*this).StepsSpacing = 8.000000000e+01f;
    (*this).BottomRungLocalZ = 8.000000000e+01f;
    (*this).AIGetOutUpOffset = -1.735000000e+02f;
    (*this).LadderTopInteractiveComponent = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderTopInteractiveComponent"));
    (*this).LadderBottomInteractiveComponent = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderBottomInteractiveComponent"));
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).LadderTopInteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).LadderBottomInteractiveComponent->SetupAttachment((*this).RootComponent);
    (*this).PlayerSnappingPoint->SetupAttachment((*this).RootComponent);
}


