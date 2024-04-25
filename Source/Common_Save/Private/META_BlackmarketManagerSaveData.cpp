#include "META_BlackmarketManagerSaveData.h"

FMETA_BlackmarketManagerSaveData::FMETA_BlackmarketManagerSaveData() {
    this->GenericPrevID = 0;
    this->DayWhenHeistersMarketBecameAvailable = 0;
    this->DayWhenWeaponsMarketBecameAvailable = 0;
    this->BaseDayForLootEvents = 0;
    this->BaseDayForWeaponEvent = 0;
    this->BaseDayForEquipmentEvent = 0;
    this->WeaponsPoolRefreshesCounter = 0;
    this->WeaponsPoolRefreshesPrice = 0;
    this->AmountOfGeneratedSoldiers = 0;
    this->BaseDayForHireArmyEvent = 0;
    this->AmountOfBoughtCheapHeisters = 0;
    this->HeistersPoolRefreshesCounter = 0;
    this->HeistersPoolRefreshPrice = 0;
}

