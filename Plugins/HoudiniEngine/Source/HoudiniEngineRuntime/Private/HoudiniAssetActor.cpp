#include "HoudiniAssetActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "HoudiniAssetComponent.h"

AHoudiniAssetActor::AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HoudiniAssetComponent = CreateDefaultSubobject<UHoudiniAssetComponent>(TEXT("HoudiniAssetComponent"));
    (*this).RootComponent = (USceneComponent*)HoudiniAssetComponent;
}


