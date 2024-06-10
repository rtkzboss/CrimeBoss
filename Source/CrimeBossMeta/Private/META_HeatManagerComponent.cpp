#include "META_HeatManagerComponent.h"
#include "ComponentInstanceDataCache.h"

UMETA_HeatManagerComponent::UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeatState = EMETA_Heat::VeryLow;
}

void UMETA_HeatManagerComponent::RemoveInvestigationEffect(const FGameplayTag inEffectTag) {
}

float UMETA_HeatManagerComponent::GetInvestigationGrowthRate() const {
    return 0.0f;
}

float UMETA_HeatManagerComponent::CalculateInvestigationChangeWithModifiers(const float inInvestigationChange) const {
    return 0.0f;
}

void UMETA_HeatManagerComponent::AddInvestigationEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier) {
}


