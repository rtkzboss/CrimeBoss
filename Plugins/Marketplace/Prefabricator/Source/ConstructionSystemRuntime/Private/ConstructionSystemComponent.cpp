#include "ConstructionSystemComponent.h"
#include "ComponentInstanceDataCache.h"

UConstructionSystemComponent::UConstructionSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TraceStartDistance = 1.000000000e+03f;
    (*this).TraceSweepRadius = 4.000000000e+01f;
    (*this).ConstructionCameraTransitionTime = 1.500000060e-01f;
    (*this).ConstructionCameraTransitionExp = 1.000000000e+00f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UConstructionSystemComponent::ToggleConstructionSystem() {
}

void UConstructionSystemComponent::ShowBuildMenu() {
}

void UConstructionSystemComponent::SetActiveTool(EConstructionSystemToolType InToolType) {
}

void UConstructionSystemComponent::HideBuildMenu() {
}

UConstructionSystemTool* UConstructionSystemComponent::GetTool(EConstructionSystemToolType InToolType) {
    return NULL;
}

EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType() const {
    return EConstructionSystemToolType::BuildTool;
}

UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool() {
    return NULL;
}

void UConstructionSystemComponent::EnableConstructionSystem(EConstructionSystemToolType InToolType) {
}

void UConstructionSystemComponent::DisableConstructionSystem() {
}


