#include "IGS_HeatManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_HeatManagerBaseComponent::UIGS_HeatManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_HeatManagerBaseComponent::SetPoliceInvestigationValue_Implementation(bool inSetProgressValueAsMax, float inProgressValue) {
}

void UIGS_HeatManagerBaseComponent::SetPlayersHeatState_Implementation(EMETA_Heat inNewHeat) {
}

void UIGS_HeatManagerBaseComponent::SetHeatValue_Implementation(float inNewValue) {
}

void UIGS_HeatManagerBaseComponent::GetPoliceInvestigationValue_Implementation(float& outProgressValue) {
}

EMETA_Heat UIGS_HeatManagerBaseComponent::GetPlayersHeatState_Implementation() {
    return EMETA_Heat::INVALID;
}

void UIGS_HeatManagerBaseComponent::GetHeatValue_Implementation(float& outHeatValue) {
}

EMETA_Gang UIGS_HeatManagerBaseComponent::GetCurrentSheriffTargetGang_Implementation() {
    return EMETA_Gang::None;
}

TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> UIGS_HeatManagerBaseComponent::GetActiveDetectives_Implementation() {
    return TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo>();
}

void UIGS_HeatManagerBaseComponent::ChangeHeatValue_Implementation(float inByValue) {
}


