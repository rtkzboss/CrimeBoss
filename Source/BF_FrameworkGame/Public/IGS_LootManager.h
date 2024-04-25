#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_OnAllCollectedLootSecuredDelegate.h"
#include "IGS_OnAllLootCollectedDelegate.h"
#include "IGS_OnAllowedLootChangedDelegate.h"
#include "IGS_OnHalfNeededLootCollectedDelegate.h"
#include "IGS_OnHalfNeededLootSecuredDelegate.h"
#include "IGS_OnHeisterItemAddedDelegate.h"
#include "IGS_OnLootCollectionRegisteredDelegate.h"
#include "IGS_OnNeededLootCollectedDelegate.h"
#include "IGS_OnNeededLootSecuredDelegate.h"
#include "IGS_OnSecuredBonusLootChangedDelegate.h"
#include "IGS_OnSecuredLootChangedDelegate.h"
#include "IGS_OnStartCollectionBonusLootDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_LootCollectionBase;
class UIGS_CarryableInventoryObject;
class UIGS_InventoryObjectFramework;
class UIGS_LootItemInventoryObject;
class UIGS_LootManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHeisterItemAdded OnHeisterItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHeisterItemAdded OnHeisterItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLootCollectionRegistered OnLootCollectionRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootCollectionBase*> LootCollections;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredLootChanged OnSecuredLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSecuredBonusLootChanged OnSecuredBonusLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllowedLootChanged OnAllowedLootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHalfNeededLootCollected OnHalfNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNeededLootCollected OnNeededLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnStartCollectionBonusLoot OnStartCollectionBonusLoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllLootCollected OnAllLootCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnHalfNeededLootSecured OnHalfLootSecured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnNeededLootSecured OnAllneededLootSecured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnAllCollectedLootSecured OnAllCollectedLootSecured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLootValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TotalObjectiveValueSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float NeededObjectiveWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllSpawnedLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredLoot, meta=(AllowPrivateAccess=true))
    float SecuredLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredOldLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecuredBonusLoot, meta=(AllowPrivateAccess=true))
    float SecuredBonusLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredOldBonusLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusWeightFromRequiredLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SecuredLootByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SecuredBonusLootByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredObjectiveLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredBonusLootWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableLootVoiceLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AllowedLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LootWeightMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpecialSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShownError;
    
public:
    UIGS_LootManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static float UpdateLootWeightMultiplier(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, float> SortLootByTag(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inLoot);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionBagsInWeight(int32 inRequiredBags);
    
    UFUNCTION(BlueprintCallable)
    void SendNewValueToHeisterData(AIGS_GameCharacterFramework* inOwningPawn, float inValueToAdd, bool inIsBonus) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectedLoot();
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootItem(TSubclassOf<UIGS_LootItemInventoryObject> inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootCollection(AIGS_LootCollectionBase* inLootCollection);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLootCarryable(TSubclassOf<UIGS_CarryableInventoryObject> inCarryable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredLoot(float inOldSecuredLootValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecuredBonusLoot(float inOldSecuredBonusLootValue);
    
    UFUNCTION(BlueprintCallable)
    void OnPocketLootWeightChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveLootCollected();
    
    UFUNCTION(BlueprintCallable)
    float GetValuePercentage(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowableItemSize(EIGS_LootSize inWeight) const;
    
    UFUNCTION(BlueprintCallable)
    static UIGS_LootManager* GetLootManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetItemValueFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetItemTypeFromClass(TSubclassOf<UIGS_LootItemInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemSize(EIGS_ItemWeight inWeight) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMissionBagsInWeight(int32 inRequiredBags);
    
    UFUNCTION(BlueprintCallable)
    static void DisableLootVoiceLines(UObject* inWCO, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    float CalculateSpecialLootItemValue(FGameplayTag inItemTag, float inItemWeight);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNewLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNewBonusLootValue(TSubclassOf<UIGS_InventoryObjectFramework> inInventoryObject, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(BlueprintCallable)
    float CalculateLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem, AIGS_GameCharacterFramework* OwningPawn);
    
    UFUNCTION(BlueprintCallable)
    float CalculateBonusLootItemValue(float inWeight, FGameplayTag inItemTag, bool inbNewItem);
    
};

