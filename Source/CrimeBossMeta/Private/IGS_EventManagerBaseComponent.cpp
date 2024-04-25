#include "IGS_EventManagerBaseComponent.h"

UIGS_EventManagerBaseComponent::UIGS_EventManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UIGS_EventManagerBaseComponent::GetGraphVariableValue_Implementation(FGameplayTag inVarName, bool& outSuccess) {
    return 0;
}

TMap<FGameplayTag, int32> UIGS_EventManagerBaseComponent::GetGraphVariables_Implementation() {
    return TMap<FGameplayTag, int32>();
}

void UIGS_EventManagerBaseComponent::GetGraphEconomyVariableByTag_Implementation(FGameplayTag inVariableTag, int32& OutValue, bool& outSuccess) {
}

void UIGS_EventManagerBaseComponent::DEBUG_StartPlotline_Implementation(const TSoftObjectPtr<UStoryGraphManager>& inPlotline, FGameplayTag inGameplayTag, bool& outSuccess) {
}

TArray<TSoftObjectPtr<UStoryGraphManager>> UIGS_EventManagerBaseComponent::DEBUG_GetPlotlines_Implementation() {
    return TArray<TSoftObjectPtr<UStoryGraphManager>>();
}


