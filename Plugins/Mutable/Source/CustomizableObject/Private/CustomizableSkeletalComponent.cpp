#include "CustomizableSkeletalComponent.h"

UCustomizableSkeletalComponent::UCustomizableSkeletalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkippedLastRenderTime = 0.00f;
    this->CustomizableObjectInstance = NULL;
}

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate) {
}


