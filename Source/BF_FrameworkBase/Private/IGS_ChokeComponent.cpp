#include "IGS_ChokeComponent.h"
#include "IGS_NavArea_Choke.h"

UIGS_ChokeComponent::UIGS_ChokeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->AreaClass = UIGS_NavArea_Choke::StaticClass();
    this->bDynamicObstacle = true;
}


