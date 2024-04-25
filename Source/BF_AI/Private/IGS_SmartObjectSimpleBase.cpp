#include "IGS_SmartObjectSimpleBase.h"
#include "Components/SceneComponent.h"

AIGS_SmartObjectSimpleBase::AIGS_SmartObjectSimpleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bShouldPlayAnimation = true;
    this->bCanPlayerBumpInto = true;
    this->RootComp = (USceneComponent*)RootComponent;
}


