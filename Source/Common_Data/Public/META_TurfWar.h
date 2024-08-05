#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "META_BaseFPSMission.h"
#include "META_TurfWarMissionSave.h"
#include "META_TurfWar.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_TurfWar : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TurfWarMissionSave m_TurfWarMissionSave;
    
public:
    UMETA_TurfWar();

    UFUNCTION(BlueprintCallable)
    void SetWarTile(FGameplayTag inNewWarTile);
    
    UFUNCTION(BlueprintCallable)
    void SetPLayersSoldiersAmount(int32 inNewSoldiersAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyGang(EMETA_Gang inEnemyGang);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TurfWarMissionSave& inTurfWarMissionSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWarTile() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfWarMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPLayersSoldiersAmount() const;
    
    UFUNCTION(BlueprintCallable)
    EMETA_Gang GetEnemyGang();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefenseLosePenaltyCost(const UObject* inWCO);
    
};

