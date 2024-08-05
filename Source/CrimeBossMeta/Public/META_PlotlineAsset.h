#pragma once
#include "CoreMinimal.h"
#include "META_BaseObject.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlotlineAssetAvailability.h"
#include "META_PlotlineAsset.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_PlotlineAsset : public UMETA_BaseObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AdditionalPricePercent;
    
public:
    UMETA_PlotlineAsset();

    UFUNCTION(BlueprintCallable)
    void SetInfo(UObject* inWCO, const FGameplayTag& inPlotlineAssetId);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalPricePercent(float inAdditionalPricePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockBossLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPreviousVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanBeLost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBossPointsMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_PlotlineAssetAvailability GetAvailability() const;
    
};

