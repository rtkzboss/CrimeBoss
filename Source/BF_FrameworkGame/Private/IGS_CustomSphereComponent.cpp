#include "IGS_CustomSphereComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CustomSphereComponent::UIGS_CustomSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = false;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bVisibleTroughWalls = false;
    this->LineThickness = 2.00f;
}


