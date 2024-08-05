#include "META_BlackmarketManagerSaveData.h"
#include "EMETA_TradeVendor.h"

FMETA_BlackmarketManagerSaveData::FMETA_BlackmarketManagerSaveData() {
    (*this).GenericRecruitsPool.Empty();
    (*this).GenericCheapRecruitsPool.Empty();
    (*this).UniqueRecruitsPool.Empty();
    (*this).UnseenUnlockedCharacterTagIDs.Empty();
    (*this).UnseenUnlockedWeaponTagIDs.Empty();
    (*this).UnseenUnlockedEquipmentTagIDs.Empty();
    (*this).GenericPrevID = 0;
    (*this).DayWhenHeistersMarketBecameAvailable = 0;
    (*this).DayWhenWeaponsMarketBecameAvailable = 0;
    (*this).PlotlineAssetsPool.Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TemporaryLockedPlotlineAssetsTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).TemporaryLockedPlotlineAssetsTags, 0)).Empty();
    (*this).ActiveLootEvent.Vendor = EMETA_TradeVendor::UNDEFINED;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ActiveLootEvent.LootTag, 0)) = NAME_None;
    (*this).ActiveLootEvent.MinLootValue = 0;
    (*this).ActiveLootEvent.MissionID = nullptr;
    (*this).BaseDayForLootEvents = 0;
    (*this).WeaponEvent.Cooldown = 0;
    (*this).WeaponEvent.MinAvailableCash = 0;
    (*this).WeaponEvent.NumberOfWeaponsPerEvent = 1;
    (*this).WeaponEvent.ExpirationTime = 0;
    (*this).WeaponEvent.WeaponClassesChances.Empty();
    (*this).WeaponEvent.WeaponQualitiesChances.Empty();
    (*this).BaseDayForWeaponEvent = 0;
    (*this).EquipmentEvent.Cooldown = 0;
    (*this).EquipmentEvent.MinAvailableCash = 0;
    (*this).EquipmentEvent.NumberOfEquipmentPerEvent = 1;
    (*this).EquipmentEvent.ExpirationTime = 0;
    (*this).EquipmentEvent.EquipmentQualitiesChances.Empty();
    (*this).EquipmentEventPool.Empty();
    (*this).BaseDayForEquipmentEvent = 0;
    (*this).WeaponsPoolRefreshesCounter = 0;
    (*this).WeaponsPoolRefreshesPrice = 0;
    (*this).HireArmyEventData.SoldierCostMultiplierForAttack = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierCostMultiplierForAttackNeutral = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierCostMultiplierForDefense = 0.000000000e+00f;
    (*this).HireArmyEventData.SoldierUpkeepCost = 0;
    (*this).HireArmyEventData.SoldierHireCost = 0;
    (*this).HireArmyEventData.SoldierHireCostMultiplierInPercent = 0.000000000e+00f;
    (*this).HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Min = 0;
    (*this).HireArmyEventData.HireArmyEventConfig.SoldierHireAmountPerHireEvent.Max = 0;
    (*this).HireArmyEventData.HireArmyEventConfig.ShouldBeClampedByArmyCapacity = false;
    (*this).HireArmyEventData.HireArmyEventConfig.ClampedMinimumArmy = 0;
    (*this).HireArmyEventData.HireEventDelay.Min = 0;
    (*this).HireArmyEventData.HireEventDelay.Max = 0;
    (*this).HireArmyEventData.HireEventDurationTime = 0;
    (*this).AmountOfGeneratedSoldiers = 0;
    (*this).BaseDayForHireArmyEvent = 0;
    (*this).AmountOfBoughtCheapHeisters = 0;
    (*this).HeistersPoolRefreshesCounter = 0;
    (*this).HeistersPoolRefreshPrice = 0;
}

