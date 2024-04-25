#include "META_PlanningBoardManagerComponent.h"

UMETA_PlanningBoardManagerComponent::UMETA_PlanningBoardManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMETA_PlanningBoardManagerComponent::SetPlanningBoardItemStatus(FGameplayTag itemTag, EMETA_PlanningBoardItemStatus Status) {
}

void UMETA_PlanningBoardManagerComponent::SetActivePlanningBoard(FGameplayTag planningBoardTag, bool callEvent) {
}

void UMETA_PlanningBoardManagerComponent::SaveData(UIGS_PaybackSaveGameCareer* saveObject) {
}

void UMETA_PlanningBoardManagerComponent::OnGraphVariableValueChanged(FGameplayTag variableTag, int32 Value) {
}

void UMETA_PlanningBoardManagerComponent::LoadData() {
}

bool UMETA_PlanningBoardManagerComponent::IsThereAnyChangeStatusEvent() const {
    return false;
}

bool UMETA_PlanningBoardManagerComponent::IsPlanningBoardUnlocked() const {
    return false;
}

void UMETA_PlanningBoardManagerComponent::HandleChangeStatusEvent(FMETA_ChangeStatusPlanningBoardEvent& Event) {
}

TMap<FGameplayTag, EMETA_PlanningBoardItemStatus> UMETA_PlanningBoardManagerComponent::GetPlanningBoardStatuses() const {
    return TMap<FGameplayTag, EMETA_PlanningBoardItemStatus>();
}

EMETA_PlanningBoardItemStatus UMETA_PlanningBoardManagerComponent::GetPlanningBoardItemStatus(FGameplayTag itemTag) const {
    return EMETA_PlanningBoardItemStatus::None;
}

TMap<FGameplayTag, UMETA_PlanningBoardItemObject*> UMETA_PlanningBoardManagerComponent::GetPlanningBoardItemsMap() const {
    return TMap<FGameplayTag, UMETA_PlanningBoardItemObject*>();
}

FMETA_PlanningBoardItemRow UMETA_PlanningBoardManagerComponent::GetPlanningBoardItemData(FGameplayTag itemTag) const {
    return FMETA_PlanningBoardItemRow{};
}

FMETA_ChangeStatusPlanningBoardEvent UMETA_PlanningBoardManagerComponent::GetNextChangeStatusEvent() const {
    return FMETA_ChangeStatusPlanningBoardEvent{};
}

FGameplayTag UMETA_PlanningBoardManagerComponent::GetActivePlanningBoardTag() const {
    return FGameplayTag{};
}

void UMETA_PlanningBoardManagerComponent::AddChangeStatusEvent(FGameplayTag itemTag, FGameplayTag voiceoverTag, EMETA_PlanningBoardItemStatus fromStatus, EMETA_PlanningBoardItemStatus toStatus) {
}


