#include "META_BaseGraphComponent.h"

UMETA_BaseGraphComponent::UMETA_BaseGraphComponent() {
    this->OwnerNode = NULL;
    this->GameMode = NULL;
    this->bAlreadyActivated = false;
}

void UMETA_BaseGraphComponent::StartSetUp_Implementation(AMETA_BaseGameMode* inGameMode, UGenericGraphNode* inOwnerNode) {
}

void UMETA_BaseGraphComponent::ResetToDefault_Implementation(bool inForceReset) {
}

bool UMETA_BaseGraphComponent::IsComponentValid_Implementation(UGenericGraphNode* inNodeEditor, TArray<FGenericGraphNode_ErrorData>& outErrorsData) {
    return false;
}

FText UMETA_BaseGraphComponent::GetInfo_Implementation() {
    return FText::GetEmpty();
}

bool UMETA_BaseGraphComponent::DoesContainClass_Implementation(UClass* inClass, bool inNeedCheckAsChild) {
    return false;
}


