#include "IGS_Ladder.h"
#include "Components/SceneComponent.h"
#include "IGS_LadderInteractiveComponent.h"

AIGS_Ladder::AIGS_Ladder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlayerSnappingPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSnappingPoint"));
    this->HandAlignLocationOffset = 46.00f;
    this->FirstTopStepOffset = 11.00f;
    this->StepsSpacing = 80.00f;
    this->BottomRungLocalZ = 80.00f;
    this->AIGetOutUpOffset = -173.50f;
    this->LadderTopInteractiveComponent = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderTopInteractiveComponent"));
    this->LadderBottomInteractiveComponent = CreateDefaultSubobject<UIGS_LadderInteractiveComponent>(TEXT("LadderBottomInteractiveComponent"));
    this->PlayerSnappingPoint->SetupAttachment(RootComponent);
    this->LadderTopInteractiveComponent->SetupAttachment(RootComponent);
    this->LadderBottomInteractiveComponent->SetupAttachment(RootComponent);
}


