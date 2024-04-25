#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAssetTableRow.h"
#include "META_PlotlineAssetsDatabase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PlotlineAssetsDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_PlotlineAssetsDatabase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersistent(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockBossLevel(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPreviousVersion(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNextTier(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PlotlineAssetTableRow GetEventInfo(FGameplayTag inAssetID, bool& outSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeLost(FGameplayTag inAssetID, bool& outSuccess) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeBought(FGameplayTag inAssetID, FGameplayTag& outPriceTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossPointMultiplier(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_PlotlineAssetAvailability GetAvailability(FGameplayTag inAssetID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAssetsTags() const;
    
};

