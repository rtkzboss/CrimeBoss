#include "PrefabRandomizer.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

APrefabRandomizer::APrefabRandomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxBuildTimePerFrame = 1.999999955e-02f;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}

void APrefabRandomizer::Randomize(int32 InSeed) {
}


