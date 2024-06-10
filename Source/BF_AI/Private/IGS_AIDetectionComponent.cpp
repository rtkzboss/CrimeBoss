#include "IGS_AIDetectionComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIDetectionComponent::UIGS_AIDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShouldFacePlayerOnDetection = true;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}


