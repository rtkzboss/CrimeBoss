#include "MakeReplaceableActorComponent.h"
#include "ComponentInstanceDataCache.h"

UMakeReplaceableActorComponent::UMakeReplaceableActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bAutoActivate = true;
}


