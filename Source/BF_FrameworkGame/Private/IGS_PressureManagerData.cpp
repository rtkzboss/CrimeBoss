#include "IGS_PressureManagerData.h"

UIGS_PressureManagerData::UIGS_PressureManagerData() {
    this->IsEnabledForHeist = false;
    this->ExpectedIntensityPoliceBadgeDefault = 90.00f;
    this->ExpectedIntensityPoliceBadge1 = 50.00f;
    this->ExpectedIntensityPoliceBadge2 = 70.00f;
    this->ExpectedIntensityPoliceBadge3 = 90.00f;
    this->ExpectedIntensityPoliceBadge4 = 120.00f;
    this->ExpectedIntensityPoliceBadge5 = 150.00f;
    this->IsEnabledForWarzone = false;
    this->ExpectedIntensityWarzoneDefault = 70.00f;
    this->ExpectedIntensityWarzoneArmyStrengt1 = 50.00f;
    this->ExpectedIntensityWarzoneArmyStrengt2 = 70.00f;
    this->ExpectedIntensityWarzoneArmyStrengt3 = 90.00f;
    this->RatioToIncreaseIntensityByTwo = 2.00f;
    this->RatioToIncreaseIntensityByOne = 1.30f;
    this->RatioToDecreaseIntensityByOne = 0.80f;
    this->RatioToDecreaseIntensityByTwo = 0.50f;
    this->DamageDealtToPlayerCoef = 1.00f;
    this->DamageDealtToBotCoef = 1.00f;
    this->PlayerDown = 25.00f;
    this->BotDown = 25.00f;
    this->EnemyKilledByPlayer = 1.00f;
    this->EnemyKilledByBot = 1.00f;
    this->IntensityCheckIntervalStartDelay = 20.00f;
    this->IntensityCheckInterval = 15.00f;
    this->HistoryInterval = 30.00f;
}


