#pragma once
#include "CoreMinimal.h"
#include "META_WeaponAmountInfo.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "EMETA_TradeVendor.h"
#include "META_CharacterID.h"
#include "IGS_StashManangerInitializedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_StashManagerBaseComponent.generated.h"

class UMETA_Equipment;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_StashManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StashManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerInitialized;
    
public:
    UIGS_StashManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpgradeWeapon(UMETA_Weapon* inWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inTargetWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SellWeaponFromStash(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SellEquipmentFromStash(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveWeaponsFromStash(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash, int32& outRemovedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetTradeableLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> GetStashWeapons(bool inIsLobby);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UMETA_Equipment*> GetStashUnequippedEquipment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UMETA_Equipment*> GetStashEquipment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_RespectLvl GetRespectLvl();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayersArmySize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayersArmyAvailableAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPawnShopLootValueLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPawnShopCurrentSellingLootValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetModifiersForPriceForSellingLoot(FGameplayTag inMainLootTag, float& outTrendModifier, float& outBaseModifier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLootValueByLootTag(FGameplayTag inLootTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetBossCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<EMETA_TradeVendor> GetAvailableVendorsForTradeByValue(FGameplayTag inLootTag, int32 inMonetaryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetActualPriceForSellingLoot(FGameplayTag inLootTag, int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FGameplayTag> GetAccountPlotlineAssetsTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FilterAvailableWeapons(const TArray<FMETA_WeaponAmountInfo>& inWeaponArray, TArray<FMETA_WeaponAmountInfo>& outWeaponArray);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanWeaponBeUpgraded(UMETA_Weapon* inWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddWeaponsToStash(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash);
    
};

