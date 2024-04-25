#include "IGS_BossLevelBaseComponent.h"

UIGS_BossLevelBaseComponent::UIGS_BossLevelBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_BossLevelBaseComponent::IncreaseBonusTypeAfterLvlUp_Implementation(EMETA_BonusType inBonus, bool& bNeedSelectBonuses) {
}

bool UIGS_BossLevelBaseComponent::HasBonusMaxLvl_Implementation(EMETA_BonusType inBonus) {
    return false;
}

int32 UIGS_BossLevelBaseComponent::GetTotalPointsForLevel_Implementation(int32 inLevel) {
    return 0;
}

TArray<FMETA_AdditionalHeister> UIGS_BossLevelBaseComponent::GetStartingHeistersDataByCurrentBonusLevel_Implementation() {
    return TArray<FMETA_AdditionalHeister>();
}

void UIGS_BossLevelBaseComponent::GetPreparedBonuses_Implementation(TArray<EMETA_BonusType>& outPrepraredBonuses, bool& bReadyForSelection) {
}

float UIGS_BossLevelBaseComponent::GetCurrentBonusValueByType_Implementation(EMETA_BonusType inBonusType, bool inRawValue) {
    return 0.0f;
}

TMap<EMETA_BonusType, float> UIGS_BossLevelBaseComponent::GetCurrentBonusesValues_Implementation() {
    return TMap<EMETA_BonusType, float>();
}

EMETA_BossLevelCategory UIGS_BossLevelBaseComponent::GetCategoryByBonusType_Implementation(EMETA_BonusType inBonus) {
    return EMETA_BossLevelCategory::Boss;
}

TArray<FMETA_PerkData> UIGS_BossLevelBaseComponent::GetCaptainPerksByCurrentBonusLevel_Implementation() {
    return TArray<FMETA_PerkData>();
}

TArray<FMETA_PerkData> UIGS_BossLevelBaseComponent::GetBossPerksByCurrentBonusLevel_Implementation() {
    return TArray<FMETA_PerkData>();
}

void UIGS_BossLevelBaseComponent::GetBossLevelData_Implementation(int32 inLevel, FMETA_BossLevelSaveData& outLevelData) {
}

void UIGS_BossLevelBaseComponent::GetBossLevel_Implementation(int32& outLevel) {
}

float UIGS_BossLevelBaseComponent::GetBonusValueByLvl_Implementation(EMETA_BonusType inBonus, int32 inLevel) {
    return 0.0f;
}

int32 UIGS_BossLevelBaseComponent::GetBonusCurrentLvl_Implementation(EMETA_BonusType inBonus, bool inRawValue) {
    return 0;
}

bool UIGS_BossLevelBaseComponent::DoesBonusTypeHavePercentageValueType_Implementation(EMETA_BonusType inBonusType) {
    return false;
}


