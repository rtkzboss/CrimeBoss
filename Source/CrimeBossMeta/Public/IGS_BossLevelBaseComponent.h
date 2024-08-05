#pragma once
#include "CoreMinimal.h"
#include "META_PerkData.h"
#include "Components/ActorComponent.h"
#include "EMETA_BonusType.h"
#include "EMETA_BossLevelCategory.h"
#include "META_AdditionalHeister.h"
#include "META_BossLevelSaveData.h"
#include "IGS_BossLevelBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_BossLevelBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_BossLevelBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IncreaseBonusTypeAfterLvlUp(EMETA_BonusType inBonus, bool& bNeedSelectBonuses);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasBonusMaxLvl(EMETA_BonusType inBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTotalPointsForLevel(int32 inLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_AdditionalHeister> GetStartingHeistersDataByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPreparedBonuses(TArray<EMETA_BonusType>& outPrepraredBonuses, bool& bReadyForSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCurrentBonusValueByType(EMETA_BonusType inBonusType, bool inRawValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EMETA_BonusType, float> GetCurrentBonusesValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_BossLevelCategory GetCategoryByBonusType(EMETA_BonusType inBonus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_PerkData> GetCaptainPerksByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_PerkData> GetBossPerksByCurrentBonusLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBossLevelData(int32 inLevel, FMETA_BossLevelSaveData& outLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetBossLevel(int32& outLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBonusValueByLvl(EMETA_BonusType inBonus, int32 inLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBonusCurrentLvl(EMETA_BonusType inBonus, bool inRawValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesBonusTypeHavePercentageValueType(EMETA_BonusType inBonusType);
    
};

