#pragma once
#include "CoreMinimal.h"
#include "EIGS_ChainDifficulty.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_EconomyData_Base.h"
#include "IGS_UnlockItemCost.h"
#include "IGS_WeaponChainReward.h"
#include "Templates/SubclassOf.h"
#include "IGS_Quickplay_EconomyData.generated.h"

class UIGS_ChainContractID;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_Quickplay_EconomyData : public UIGS_EconomyData_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressResetCompensationMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, float> ChainRewardMultipliersForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_ChainContractID>, float> ChainRewardMultipliersForContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ChainDifficulty, FIGS_WeaponChainReward> ChainWeaponsForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompleteChainMoneyRewardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseItemCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DigitsWithoutRounding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemCost> CategoryCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_ItemQuality, int32> HeisterLevelPerQuality;
    
public:
    UIGS_Quickplay_EconomyData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartingCash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRewardMultiplierForChainContract(TSubclassOf<UIGS_ChainContractID> inChainContractID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCostPerCategoryAndQuality(EIGS_UnlockCategory inItemCategory, EMETA_ItemQuality inItemQuality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterLevelPerQuality(EMETA_ItemQuality inQuality);
    
};

