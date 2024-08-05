#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_InventorySlot.h"
#include "EMETA_ChangedHeisterAttribute.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"
#include "META_ChangedHeisterAttributeInfo.h"
#include "META_CharacterID.h"
#include "CommonHeisterData.h"
#include "IGS_ChainLoadout.h"
#include "META_BaseObject.h"
#include "META_CharacterInfo.h"
#include "META_HeisterLoadout.h"
#include "META_PerkData.h"
#include "META_Character.generated.h"

class UMETA_Equipment;
class UMETA_Weapon;
class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UMETA_Character : public UMETA_BaseObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CharacterInfo m_CharacterInfo;
    
public:
    UMETA_Character();

    UFUNCTION(BlueprintCallable)
    void UpdateDataByNewDay();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponToItsSlot(UMETA_Weapon* inWeapon, UMETA_Weapon*& outPreviousWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponsCostCoefficient(float inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariable(FGameplayTag inAttribute, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedForQP(bool inUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EMETA_CharacterState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetPerks(TArray<FMETA_PerkData> inPerks);
    
    UFUNCTION(BlueprintCallable)
    void SetMood(EMETA_CharacterMood inMood);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxLeveled(bool inMaxLeveled);
    
    UFUNCTION(BlueprintCallable)
    void SetLostReviveCount(int32 inInjuries);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadoutAsChainLoadout();
    
    UFUNCTION(BlueprintCallable)
    void SetIsUnseenInShop(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTemporary(bool inNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(const FMETA_CharacterInfo& inCharacterInfo, bool bLoadData);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterMissionPlayedCountReadyForPromote();
    
    UFUNCTION(BlueprintCallable)
    void SetChainLoadout(FIGS_ChainLoadout inChainLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseUpkeepCost(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseMissionCutPercent(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseHireCost(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountOfJobsWhichCanBeCompletedToday(int32 inNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAbility1Charges(int32 inCharges);
    
    UFUNCTION(BlueprintCallable)
    bool SelectEquipment(UMETA_Equipment* inCurrentEquipment);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVariable(FGameplayTag inAttribute);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTrait(FGameplayTag inTrait);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereWeaponInSlot(EIGS_InventorySlot inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTemporary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLeveled() const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementTimesHealed();
    
    UFUNCTION(BlueprintCallable)
    bool IncreaseLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_Weapon* GetWeaponInSlot(EIGS_InventorySlot inSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetVariables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpkeepCostWithModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnlockedForQP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTraits() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimesHealed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSurname() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_CharacterState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReviveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_ItemQuality GetQualityTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMETA_PerkData> GetPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMutableIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_CharacterMood GetMood() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionWasPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionCutPercentWithModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel(UObject* inWCO) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLostReviveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_HeisterLoadout GetLoadoutReference();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_HeisterLoadout GetLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnseenInShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterInfo GetInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_CharacterID GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHireCost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGenericVariantID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFullName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFirstName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmountOfJobsWhichCanBeCompletedToday() const;
    
    UFUNCTION(BlueprintCallable)
    FCommonHeisterData GetCommonHeisterData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterPromoteProgress();
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterPreviousPromoteProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseUpkeepCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseMissionCutPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseLevelUpMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseHireCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagQuery GetAllowedWiedables() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAditionalReviveCount() const;
    
    UFUNCTION(BlueprintCallable)
    float GetActiveHeisterAttributeMultiplier(EMETA_ChangedHeisterAttribute inAttribute);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAbility1Charges();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCurrentAmountOfJobsWhichCanBeCompletedToday(int32 inDecreasingValue, int32& outCurrentValue);
    
    UFUNCTION(BlueprintCallable)
    UMETA_Equipment* ClearEquipment();
    
    UFUNCTION(BlueprintCallable)
    void ClearAndReturnWeaponFromSlot(EIGS_InventorySlot inSlot, UMETA_Weapon*& outWeapon, UMETA_Equipment*& outEquipment);
    
    UFUNCTION(BlueprintCallable)
    FMETA_HeisterLoadout ClearAndReturnLoadout();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMissionWasPlayedByValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHeisterAttributeWithinDays(FMETA_ChangedHeisterAttributeInfo inNewInfo);
    
    UFUNCTION(BlueprintCallable)
    bool CanCharacterBePromoted();
    
    UFUNCTION(BlueprintCallable)
    bool AddTrait(FGameplayTag inTrait);
    
    UFUNCTION(BlueprintCallable)
    void AddPerk(const FMETA_PerkData inPerk);
    
};

