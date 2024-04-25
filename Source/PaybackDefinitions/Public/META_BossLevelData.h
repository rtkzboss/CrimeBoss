#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMETA_BonusType.h"
#include "EMETA_BonusUsage.h"
#include "EMETA_BossLevelCategory.h"
#include "META_AdditionalHeisters.h"
#include "META_BonusTypeData.h"
#include "META_BonusTypesArray.h"
#include "META_BossLevelReductionConfig.h"
#include "META_ExtraBossEquipmentData.h"
#include "META_ExtraBossWeaponsData.h"
#include "META_StartingBossPerks.h"
#include "Templates/SubclassOf.h"
#include "META_BossLevelData.generated.h"

class UCurveTable;
class UGameplayEffect;

UCLASS(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_BossLevelData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulFPSMissionByBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulFPSMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulBigHeist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulTWAttackNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulTWAttackRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerSuccessfulTWDefence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPer10000Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerWaveMaxPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerWaveMaxPercentAwardPerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossPointsPerWaveMaxPercentAwardPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BossLevelReductionConfig BossLevelReductionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveTable* BonusesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray> CategoryBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> ArmyHiddenPerksByBonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> BossHiddenPerksByBonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BonusType, TSubclassOf<UGameplayEffect>> CaptainHiddenPerksByBonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> CaptainPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> BossPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ExtraBossWeaponsData> PrimaryWeaponQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ExtraBossEquipmentData> BonusEquipmentQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_AdditionalHeisters> StartingHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_StartingBossPerks> StartingBossPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_BonusType, FMETA_BonusTypeData> BonusTypeData;
    
public:
    UMETA_BossLevelData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_AdditionalHeisters> GetStartingHeisters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_StartingBossPerks> GetStartingBossPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_ExtraBossWeaponsData> GetPrimaryWeaponQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurveTableRowName(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMETA_BossLevelCategory, FMETA_BonusTypesArray> GetCategoryBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayEffect>> GetCaptainPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_BonusType> GetCaptainPerkBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetCaptainHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerWaveMaxPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerWaveMaxPercentAwardPerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerWaveMaxPercentAwardPerKill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerSuccessfulTwDefence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerSuccessfulTwAttackRival() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerSuccessfulTWAttackNeutral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerSuccessfulFPSMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerSuccessfulBigHeist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPerAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBossPointsPer10000Score() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayEffect>> GetBossPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_BonusType> GetBossPerkBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_BossLevelReductionConfig GetBossLevelReductionConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetBossHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_BonusUsage GetBonusUsage(EMETA_BonusType inBonusType) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBonusMaxLevel(EMETA_BonusType inBonusType, int32& outMaxLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCurveTable* GetBonusesTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_ExtraBossEquipmentData> GetBonusEquipmentQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EMETA_BonusType> GetArmyPerkBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetArmyHiddenPerkByBonusType(EMETA_BonusType inBonus) const;
    
};

