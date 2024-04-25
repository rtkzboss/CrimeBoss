#include "IGS_CoverPointComponent.h"
#include "CoverPoint.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_CoverPointComponent::UIGS_CoverPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->bShouldCollideWhenPlacing = true;
    this->ForceDeactivate = false;
    this->CoverPoint = CreateDefaultSubobject<UCoverPoint>(TEXT("CoverPoint"));
}

void UIGS_CoverPointComponent::DeactivateCoverPoint(bool inForceDeactivate) {
}

bool UIGS_CoverPointComponent::ActivateCoverPoint(bool inForceActivate) {
    return false;
}


