#include "IGS_PostProcessManagerComponent.h"

UIGS_PostProcessManagerComponent::UIGS_PostProcessManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Camera = NULL;
}

void UIGS_PostProcessManagerComponent::SetPostProcessWeight(const TScriptInterface<IBlendableInterface>& PostProcess, float inWeight) {
}

void UIGS_PostProcessManagerComponent::RemovePostProcessDirect(const TScriptInterface<IBlendableInterface>& PostProcess) {
}

void UIGS_PostProcessManagerComponent::RemovePostProcess(const TScriptInterface<IBlendableInterface>& PostProcess) {
}

void UIGS_PostProcessManagerComponent::ActivatePostProcess(const TScriptInterface<IBlendableInterface>& PostProcess, float Weight, float Duration, float Speed) {
}


