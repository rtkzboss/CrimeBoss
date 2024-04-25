#include "IGS_CoverPointBase.h"
#include "Components/SceneComponent.h"

AIGS_CoverPointBase::AIGS_CoverPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->IsActive = true;
    this->Radius = 35.00f;
    this->IsLocked = false;
    this->ShowDebug = false;
    this->ShowShootingRange = false;
    this->ShowSideSteps = true;
    this->ShowSideStepsOnly = false;
    this->ShowAngles = false;
    this->ShowStanding = true;
    this->SpriteComponent = NULL;
}


