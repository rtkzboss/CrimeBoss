#include "CustomizableSkeletalComponent.h"
#include "ComponentInstanceDataCache.h"

UCustomizableSkeletalComponent::UCustomizableSkeletalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate) {
}


