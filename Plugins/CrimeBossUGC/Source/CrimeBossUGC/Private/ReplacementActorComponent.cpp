#include "ReplacementActorComponent.h"
#include "ComponentInstanceDataCache.h"

UReplacementActorComponent::UReplacementActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bAutoActivate = true;
}


