#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnlockCategory.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_OnRewardItemUnlockedSignatureDelegate.h"
#include "IGS_OnUnlockManagerInitedSignatureDelegate.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_UnlockItemInfoList.h"
#include "IGS_UnlockManager.generated.h"

class UIGS_UnlockManagerData;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_UnlockManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnRewardItemUnlockedSignature OnRewardItemUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnUnlockManagerInitedSignature OnManagerInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UnlockManagerData* UnlockManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemInfoList> UnlockableItemsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockItemInfo> UnlockableItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemInfoList> UnlockedItemsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockItemInfo> UnlockedItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_UnlockCategory, FIGS_UnlockItemInfoList> EntitledItemsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_UnlockItemInfo> EntitledItemsList;
    
public:
    UIGS_UnlockManager();

    UFUNCTION(BlueprintCallable)
    void UnlockItemByID(FGameplayTag inTagID);
    
    UFUNCTION(BlueprintCallable)
    void UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void ResetUnlocks();
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory);
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingUnlockedItemByID(FGameplayTag inTagID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingUnlockedItem(const FIGS_UnlockItemInfo& inUnlockItemInfo);
    
    UFUNCTION(BlueprintCallable)
    static void PrintUnlockItemInfos(const TArray<FIGS_UnlockItemInfo>& inUnlockItemInfos, const FString& inHeader);
    
    UFUNCTION(BlueprintCallable)
    void PrintAllAvailableRewards(const int32 inLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingUnlockedItemByID(FGameplayTag inTagID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingUnlockedItem(const FIGS_UnlockItemInfo& inUnlockItemInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetUnlockItemInfos(const TArray<FGameplayTag>& inTagIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIGS_UnlockItemInfo GetUnlockItemInfo(FGameplayTag inTagID, bool inMustBeUnlockable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetForcedUnlockRewards(const TArray<FIGS_UnlockItemInfo>& inUnlockItemInfos, const int32 inLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllUnlockedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllUnlockableItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllUnlockableItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllPendingUnlockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllPendingUnlockedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllLockedItemsByCategory(EIGS_UnlockCategory inUnlockCategory, bool inGetOnlyOwnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllLockedItems(bool inGetOnlyOwnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllEntitledItemsByEntitlementID(FGameplayTag inTagID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllEntitledItemsByCategory(EIGS_UnlockCategory inUnlockCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockItemInfo> GetAllEntitledItems() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUnlockAll();
    
    UFUNCTION(BlueprintCallable)
    void FilterWeaponsWithoutBaseWeapon(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos);
    
    UFUNCTION(BlueprintCallable)
    void FilterWeaponSkins(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos);
    
    UFUNCTION(BlueprintCallable)
    void FilterUnlockRewardsByQualityCap(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos, const int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void FilterHigherLevelUnlockRewards(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos, int32 inLevel);
    
    UFUNCTION(BlueprintCallable)
    void FilterEntitledItems(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutUnlockItemInfos);
    
    UFUNCTION(BlueprintCallable)
    void EnsureNotSameCategory(const TArray<FIGS_UnlockItemInfo>& inLockedItems, UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutResultItems, const int32 inMaxRewardsCount);
    
    UFUNCTION(BlueprintCallable)
    void AddRandomRewards(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutLockedItems, UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& inOutResultItems, const int32 inMaxRewardsCount);
    
};

