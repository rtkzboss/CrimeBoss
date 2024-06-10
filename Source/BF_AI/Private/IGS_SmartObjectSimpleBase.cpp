#include "IGS_SmartObjectSimpleBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_SmartObjectSimpleBase::AIGS_SmartObjectSimpleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bShouldPlayAnimation = true;
    (*this).bCanPlayerBumpInto = true;
    (*this).RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).RootComponent = (USceneComponent*)RootComp;
}


