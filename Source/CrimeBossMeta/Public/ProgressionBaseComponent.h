#pragma once
#include "CoreMinimal.h"
#include "IGS_ProgressionResult.h"
#include "IGS_UnlockItemInfo.h"
#include "IGS_MissionResult.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_ProcessMissionProgressionResultDelegate.h"
#include "ProgressionBaseComponent.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_ProgressionManager;
class UIGS_SaveManager;
class UIGS_UnlockManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UProgressionBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ProcessMissionProgressionResult OnProcessMissionProgressionResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ProgressionResult AccumulatedProgressionResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ProgressionManager* m_ProgressionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_UnlockManager* m_UnlockManager;
    
public:
    UProgressionBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockItem(const FIGS_UnlockItemInfo& inUnlockItemInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryGetPendingUnlockedRewards(TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void SaveSelectedUnlockedRewardsHistory(const FGameplayTag& selectedReward);
    
    UFUNCTION(BlueprintCallable)
    void SavePendingUnlockRewards(UPARAM(Ref) TArray<FIGS_UnlockItemInfo>& intUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void SavePendingLevelUps(const int32 inLevelUps);
    
    UFUNCTION(BlueprintCallable)
    void ResetAccumulatedProgressionResult();
    
    UFUNCTION(BlueprintCallable)
    bool ProcessNextPendingLevelUp(TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
    UFUNCTION(BlueprintCallable)
    void ProcessMissionResults(UPARAM(Ref) FIGS_MissionResult& inMissionResult, bool inAccumulateResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSomePendingUnlockRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSomePendingLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetPendingUnlockRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPendingLevelsCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingUnlockedRewards();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ProcessLevelUp(const int32 inLevel, TArray<FIGS_UnlockItemInfo>& outUnlockedItems);
    
};

