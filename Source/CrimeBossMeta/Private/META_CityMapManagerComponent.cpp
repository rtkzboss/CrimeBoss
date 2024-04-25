#include "META_CityMapManagerComponent.h"

UMETA_CityMapManagerComponent::UMETA_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedTileObject = NULL;
    this->SelectedMission = NULL;
    this->SelectedTurfIconTile = NULL;
    this->LastDayOfTilesIncomeRefresh = 0;
    this->PrevTileStrenght = 0;
    this->ForceMapEvents = false;
}

void UMETA_CityMapManagerComponent::GetTileObject_Implementation(const FGameplayTag inID, UMapTile*& outTileObject) {
}


