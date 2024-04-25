#include "IGS_CustomBoxComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CustomBoxComponent::UIGS_CustomBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = false;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
}


