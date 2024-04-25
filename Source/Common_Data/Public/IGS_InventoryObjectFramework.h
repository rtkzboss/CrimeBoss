#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIGS_ItemType.h"
#include "IGS_CommonItemData.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_InventoryObjectFramework.generated.h"

class UIGS_InventoryObjectFramework;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_InventoryObjectFramework : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomName;
    
    UIGS_InventoryObjectFramework();

    UFUNCTION(BlueprintCallable)
    void TransferData(UIGS_InventoryObjectFramework* inOtherItem);
    
    UFUNCTION(BlueprintCallable)
    void LoadInventoryObjectData(FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWieldable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrowable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerForbidden();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMetal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLootBag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDroppable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarryable();
    
    UFUNCTION(BlueprintCallable)
    void InitDefaultInventoryObjectData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasPickedUpBefore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBonusLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_InventoryObjectUniversalData GetInventoryObjectData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIndex();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDefaultName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomName();
    
public:
    UFUNCTION(BlueprintCallable)
    FIGS_CommonItemData GetCommonDataBP();
    
};

