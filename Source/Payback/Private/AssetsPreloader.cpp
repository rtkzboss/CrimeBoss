#include "AssetsPreloader.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AAssetsPreloader::AAssetsPreloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShouldPreload = true;
}


