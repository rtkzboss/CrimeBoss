#pragma once
#include "CoreMinimal.h"
#include "META_WeaponAmountInfo.h"
#include "GameplayTagContainer.h"
#include "EMETA_ArmyTier.h"
#include "EMETA_ConditionOperator.h"
#include "EMETA_Partner.h"
#include "META_ActionCardID.h"
#include "META_ActionCardStrenghtAmount.h"
#include "META_PartnerInfo.h"
#include "META_PawnShopTrendDataRuntime.h"
#include "IGS_StashManagerBaseComponent.h"
#include "META_LootChangedDelegate.h"
#include "META_PartnerInfoChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "META_StashManagerComponent.generated.h"

class UIGS_EquipmentInventoryObject;
class UMETA_BaseActionCard;
class UMETA_Equipment;
class UMETA_MissionID;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_StashManagerComponent : public UIGS_StashManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PartnerInfoChanged OnPartnerInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_LootChanged OnLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_LootChanged OnLootSold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_Partner, FMETA_PartnerInfo> PartnersInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Equipment*> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UMETA_BaseActionCard>, FMETA_ActionCardStrenghtAmount> ActionCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMETA_ActionCardID, int32> ActionCardsDurationCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLootValueWasSoldToPawnShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMETA_PawnShopTrendDataRuntime> PawnShopTrends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastDayWhenWarehouseAttackStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceWarehouseAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> WarehouseAttackMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyWarehouseAttackWasRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> LootWarehouseattackWasRemoved;
    
public:
    UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryGetValidParentLootTag(FGameplayTag inLootTag, FGameplayTag& outMetaTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCashForPartner(EMETA_Partner Partner, int32 inCash);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetWeaponsFromStashByID(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponId, UMETA_Weapon*& outWeaponsData, int32& outAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetSortedLoot(bool inAscSort);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetPlayersArmyTier(EMETA_ArmyTier& ArmyTier) const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_PartnerInfo GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLootByValue(FGameplayTag inLootTag, int32 InValue, bool inRawValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue);
    
    UFUNCTION(BlueprintCallable)
    void AddEquipmentToStashByObject(UMETA_Equipment* inEquipment);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId);
    
};

