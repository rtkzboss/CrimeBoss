#include "IGS_WarManagerBaseComponent.h"

UIGS_WarManagerBaseComponent::UIGS_WarManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIGS_WarManagerBaseComponent::TurfAttackAvailable_Implementation() {
    return false;
}

TArray<UMapTile*> UIGS_WarManagerBaseComponent::GetTilesAvailableForAttack_Implementation(EMETA_Gang inAttackerGang, const TArray<EMETA_Gang>& inPreferredGangs, bool inDoubledFriendCheck) {
    return TArray<UMapTile*>();
}

TMap<EMETA_Gang, int32> UIGS_WarManagerBaseComponent::GetGangsWhichContainPlayerInAttitudeList_Implementation(EMETA_GangAttitudeList inAttitudeList) {
    return TMap<EMETA_Gang, int32>();
}


