#include "IGS_DailyManagerBaseComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_DailyManagerBaseComponent::UIGS_DailyManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_DailyManagerBaseComponent::UpdateDay_Implementation() {
}

void UIGS_DailyManagerBaseComponent::StartNewDay_Implementation() {
}

int32 UIGS_DailyManagerBaseComponent::GetCurrentDay_Implementation() const {
    return 0;
}

void UIGS_DailyManagerBaseComponent::EndDay_Implementation() {
}


