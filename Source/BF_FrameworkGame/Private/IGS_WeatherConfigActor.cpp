#include "IGS_WeatherConfigActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_WeatherConfigActor::AIGS_WeatherConfigActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

void AIGS_WeatherConfigActor::UpdateWeatherSystem() const {
}


