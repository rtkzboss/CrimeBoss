#include "IGS_RandEventManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_RandEventManagerBaseComponent::UIGS_RandEventManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_RandEventManagerBaseComponent::SetEventAsActive_Implementation(FGameplayTag inEventTag) {
}

FGameplayTag UIGS_RandEventManagerBaseComponent::GetReadyEventOfPartner_Implementation(EMETA_Partner inPartner) {
    return FGameplayTag{};
}

FGameplayTag UIGS_RandEventManagerBaseComponent::GetEventRelatedToMission_Implementation(TSubclassOf<UMETA_MissionID> inMissionID) {
    return FGameplayTag{};
}

int32 UIGS_RandEventManagerBaseComponent::GetEventPrice_Implementation(FGameplayTag inEventTag) {
    return 0;
}

FGameplayTag UIGS_RandEventManagerBaseComponent::GetActiveEventOfPartner_Implementation(EMETA_Partner inPartner) {
    return FGameplayTag{};
}


