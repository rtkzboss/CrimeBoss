#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_TradeVendor.h"
#include "META_BaseMission.h"
#include "META_TradeDealSellMissionRowInfo.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeDealSell.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_TradeDealSell : public UMETA_BaseMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TradeDealSellMissionSave m_TradeDealMissionSave;
    
public:
    UMETA_TradeDealSell();

    UFUNCTION(BlueprintCallable)
    void SetPrice(int32 inPrice);
    
    UFUNCTION(BlueprintCallable)
    void SetLootAmount(int32 inLootAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetLoot(FGameplayTag inLootTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TradeDealSellMissionSave& inTradeMissionSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_TradeVendor GetVendor();
    
    UFUNCTION(BlueprintCallable)
    FMETA_TradeDealSellMissionSave GetSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLootAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_TradeDealSellMissionRowInfo GetInfo() const;
    
};

