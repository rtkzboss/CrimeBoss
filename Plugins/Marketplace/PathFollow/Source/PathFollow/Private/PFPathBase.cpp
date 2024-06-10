#include "PFPathBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PFPathComponent.h"

APFPathBase::APFPathBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PathToFollow = CreateDefaultSubobject<UPFPathComponent>(TEXT("PathToFollow"));
    (*this).RootComponent = (USceneComponent*)PathToFollow;
}


