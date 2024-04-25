#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_ComparableItemData.h"
#include "META_BaseObject.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UMETA_BaseObject : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag itemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntitlementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCost;
    
public:
    UMETA_BaseObject();

    UFUNCTION(BlueprintCallable)
    void SetTagID(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void SetItemPrice(int32 inItemCost);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(TSoftObjectPtr<UTexture2D> inIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetEntitlementTagID(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTagID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetItemQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntitlementTagID() const;
    
};

