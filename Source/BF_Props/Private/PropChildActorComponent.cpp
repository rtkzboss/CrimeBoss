#include "PropChildActorComponent.h"

UPropChildActorComponent::UPropChildActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderMesh = false;
    this->ActorClass = NULL;
}


