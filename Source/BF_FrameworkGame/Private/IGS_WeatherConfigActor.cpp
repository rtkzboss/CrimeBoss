#include "IGS_WeatherConfigActor.h"
#include "Components/SceneComponent.h"

AIGS_WeatherConfigActor::AIGS_WeatherConfigActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

void AIGS_WeatherConfigActor::UpdateWeatherSystem() const {
}


