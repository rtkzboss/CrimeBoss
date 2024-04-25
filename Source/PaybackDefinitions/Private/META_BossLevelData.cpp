#include "META_BossLevelData.h"
#include "Templates/SubclassOf.h"

UMETA_BossLevelData::UMETA_BossLevelData() {
    this->BossPointsPerAsset = 0;
    this->BossPointsPerSuccessfulFPSMissionByBoss = 0;
    this->BossPointsPerSuccessfulFPSMission = 0;
    this->BossPointsPerSuccessfulBigHeist = 0;
    this->BossPointsPerSuccessfulTWAttackNeutral = 0;
    this->BossPointsPerSuccessfulTWAttackRival = 0;
    this->BossPointsPerSuccessfulTWDefence = 0;
    this->BossPointsPer10000Score = 0;
    this->BossPointsPerWaveMaxPoints = 0;
    this->BossPointsPerWaveMaxPercentAwardPerKill = 0;
    this->BossPointsPerWaveMaxPercentAwardPerSecond = 0;
    this->BonusesTable = NULL;
}

TArray<FMETA_AdditionalHeisters> UMETA_BossLevelData::GetStartingHeisters() const {
    return TArray<FMETA_AdditionalHeisters>();
}

TArray<FMETA_StartingBossPerks> UMETA_BossLevelData::GetStartingBossPerks() const {
    return TArray<FMETA_StartingBossPerks>();
}

TArray<FMETA_ExtraBossWeaponsData> UMETA_BossLevelData::GetPrimaryWeaponQuality() const {
    return TArray<FMETA_ExtraBossWeaponsData>();
}

FName UMETA_BossLevelData::GetCurveTableRowName(EMETA_BonusType inBonusType) const {
    return NAME_None;
}

TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray> UMETA_BossLevelData::GetCategoryBonuses() const {
    return TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray>();
}

TArray<TSubclassOf<UGameplayEffect>> UMETA_BossLevelData::GetCaptainPerks() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

TArray<EMETA_BonusType> UMETA_BossLevelData::GetCaptainPerkBonuses() const {
    return TArray<EMETA_BonusType>();
}

TSubclassOf<UGameplayEffect> UMETA_BossLevelData::GetCaptainHiddenPerkByBonusType(EMETA_BonusType inBonus) const {
    return NULL;
}

int32 UMETA_BossLevelData::GetBossPointsPerWaveMaxPoints() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerWaveMaxPercentAwardPerSecond() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerWaveMaxPercentAwardPerKill() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerSuccessfulTwDefence() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerSuccessfulTwAttackRival() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerSuccessfulTWAttackNeutral() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerSuccessfulFPSMission() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerSuccessfulBigHeist() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPerAsset() const {
    return 0;
}

int32 UMETA_BossLevelData::GetBossPointsPer10000Score() const {
    return 0;
}

TArray<TSubclassOf<UGameplayEffect>> UMETA_BossLevelData::GetBossPerks() const {
    return TArray<TSubclassOf<UGameplayEffect>>();
}

TArray<EMETA_BonusType> UMETA_BossLevelData::GetBossPerkBonuses() const {
    return TArray<EMETA_BonusType>();
}

FMETA_BossLevelReductionConfig UMETA_BossLevelData::GetBossLevelReductionConfig() const {
    return FMETA_BossLevelReductionConfig{};
}

TSubclassOf<UGameplayEffect> UMETA_BossLevelData::GetBossHiddenPerkByBonusType(EMETA_BonusType inBonus) const {
    return NULL;
}

EMETA_BonusUsage UMETA_BossLevelData::GetBonusUsage(EMETA_BonusType inBonusType) const {
    return EMETA_BonusUsage::Other;
}

bool UMETA_BossLevelData::GetBonusMaxLevel(EMETA_BonusType inBonusType, int32& outMaxLevel) {
    return false;
}

UCurveTable* UMETA_BossLevelData::GetBonusesTable() const {
    return NULL;
}

TArray<FMETA_ExtraBossEquipmentData> UMETA_BossLevelData::GetBonusEquipmentQuality() const {
    return TArray<FMETA_ExtraBossEquipmentData>();
}

TArray<EMETA_BonusType> UMETA_BossLevelData::GetArmyPerkBonuses() const {
    return TArray<EMETA_BonusType>();
}

TSubclassOf<UGameplayEffect> UMETA_BossLevelData::GetArmyHiddenPerkByBonusType(EMETA_BonusType inBonus) const {
    return NULL;
}


