#include "IGS_AILookAtComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AILookAtComponent::UIGS_AILookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_AILookAtComponent::SetLookAtWeight(float HorizontalWeight, float VerticalWeight, float Smoothness) {
}

void UIGS_AILookAtComponent::SetLookAtTarget(AActor* LookAtTarget) {
}

AActor* UIGS_AILookAtComponent::GetLookAtTargetActor() const {
    return NULL;
}

FVector UIGS_AILookAtComponent::GetLookAtTarget(float& OutHorizontalWeight, float& OutVerticalWeight, float& OutSmoothness) const {
    return FVector{};
}


