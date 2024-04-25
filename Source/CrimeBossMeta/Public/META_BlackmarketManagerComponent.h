#pragma once
#include "CoreMinimal.h"
#include "META_ArmyTierConfiguration.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_RespectLvl.h"
#include "META_BMActiveEventLootData.h"
#include "META_BMEventEquipmentData.h"
#include "META_BMEventLootData.h"
#include "META_BMEventWeaponData.h"
#include "META_VendorLootKey.h"
#include "IGS_BlackmarketManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_BlackmarketManagerComponent.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_Character;
class UMETA_Equipment;
class UMETA_PlotlineAsset;
class UMETA_Weapon;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_BlackmarketManagerComponent : public UIGS_BlackmarketManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> UniqueHeistersPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Character*> GenericHeistersPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> WeaponsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> EquipmentPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_PlotlineAsset*> PlotlineAssetsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenericPrevID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayWhenHeistersMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayWhenWeaponsMarketBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TemporaryLockedPlotlineAssetsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBoughtCheapHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshWeaponsPoolCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshHeistersPoolCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshWeaponsPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefreshHeistersPoolStartPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDayForLootEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> ReadyForActivationLootEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BMActiveEventLootData ActiveLootEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDayForWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> WeaponsOfBMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BMEventWeaponData WeaponEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDayForHireArmyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfGeneratedSoldiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_ArmyTierConfiguration ArmyHireEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHireArmyEventClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseDayForEquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> EquipmentOfBMEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BMEventEquipmentData EquipmentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnlockedEquipmentTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedCharacterTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedWeaponTagIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> UnseenUnlockedEquipmentTagIDs;
    
public:
    UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProcessWeaponEvent();
    
    UFUNCTION(BlueprintCallable)
    void ProcessUnseenUnlockedItemsFromQuickplay();
    
    UFUNCTION(BlueprintCallable)
    void ProcessHireArmyEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsWeaponBuyingUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHireArmyEventUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHireArmyEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipmentEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsBMLootEventReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetWeaponsPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Weapon*> GetWeaponsPoolForBMWeaponEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetWeaponEventUnlockTag() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMETA_Character*> GetUniqueHeistersPoolForBlackmarket(EMETA_RespectLvl inCurrentBossStatus, int32 inTargetAmountOfUnseenItemsForPurchase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_PlotlineAsset*> GetPlotlineAssetsPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextUniqueGenericID();
    
    UFUNCTION(BlueprintCallable)
    TSet<int32> GetManyUniqueGenericIDs(int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> GetLockedEquipmentIDsForCurrentBMEquipmentEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHireArmyEventUnlockTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FMETA_ArmyTierConfiguration GetHireArmyEventData(bool& bActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetHeistersPoolRefreshPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMETA_Equipment*> GetEquipmentPoolForBMEquipmentEvent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetBPEventWeaponInfoByCurrentBossRespect(FMETA_BMEventWeaponData& outWeaponEventData);
    
    UFUNCTION(BlueprintCallable)
    bool GetBPEventEquipmentInfoByCurrentBossRespect(FMETA_BMEventEquipmentData& outEquipmentEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> GetBMEventLootDataForVendors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAmountOfSoldiersCanBeBought();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmountOfGeneratedSoldiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceWeaponsPoolRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceHeistersPoolRefresh();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ProcessWeaponEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckWeaponEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void CheckHireArmyEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void CheckEquipmentEventFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWeaponEventBeTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuySoldiers(int32 inAmount, int32& outAmountOfSoldiersBought);
    
    UFUNCTION(BlueprintCallable)
    void AddUniqueHeisterToMarketPool(EIGS_CharacterID inCharacterID, bool inIgnoreLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateLootEventByVendor(FMETA_VendorLootKey inVendorLootKey);
    
};

