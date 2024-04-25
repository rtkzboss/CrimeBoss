#include "IGS_AISpawnGroupChooser.h"
#include "Components/SceneComponent.h"

AIGS_AISpawnGroupChooser::AIGS_AISpawnGroupChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AutomaticStart = true;
}

void AIGS_AISpawnGroupChooser::SpawnGroup() {
}


