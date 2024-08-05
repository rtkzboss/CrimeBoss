#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_InventoryObjectFramework.h"
#include "IGS_WieldableBaseData.h"
#include "IGS_WieldableInventoryObjectBase.generated.h"

class UIGS_WeaponSkinData;

UCLASS(Abstract, Blueprintable)
class COMMON_DATA_API UIGS_WieldableInventoryObjectBase : public UIGS_InventoryObjectFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WieldableStateTagsContainer;
    
    UIGS_WieldableInventoryObjectBase();

    UFUNCTION(BlueprintCallable)
    bool WasAlreadyEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMelee();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExplosive();
    
    UFUNCTION(BlueprintCallable)
    FIGS_WieldableBaseData GetWieldableDataBP();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetCurrentSpecificSkin();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetCurrentDefaultSkin();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UIGS_WeaponSkinData> GetBaseSkin();
    
};

