#pragma once
#include "CoreMinimal.h"
#include "IGS_UnlockReward.h"
#include "IGS_UnlockedCharacterSaveData.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "IGS_CharacterUnlockedDelegate.h"
#include "IGS_ContractUnlockedDelegate.h"
#include "IGS_UnlockManagerBaseComponent.h"
#include "IGS_UnlockManagerComponent.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_UnlockManagerComponent : public UIGS_UnlockManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ContractUnlocked OnContractUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CharacterUnlocked OnCharacterUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> m_PendingUnlockRewards;
    
public:
    UIGS_UnlockManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockUniqueCharacter(EIGS_CharacterID inCharacter, bool bMaxLeveled);
    
    UFUNCTION(BlueprintCallable)
    void UnlockReward(FGameplayTag inRewardID);
    
    UFUNCTION(BlueprintCallable)
    void UnlockContract(FGameplayTag inTagUnlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUniqueCharacterUnlocked(EIGS_CharacterID inCharacter, bool bMaxLeveled) const;
    
    UFUNCTION(BlueprintCallable)
    void IsRewardAlreadyUnlocked(FGameplayTag inRewardID, bool& outUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetUnlockRewardIdForMission(FGameplayTag inMissionID, FGameplayTag& outRewardID, bool& outFound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetUnlockRewardIdForCharacter(EIGS_CharacterID inCharacter, bool bMaxLeveled, FGameplayTag& outRewardID, bool& outFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_UnlockedCharacterSaveData> GetUnlockedUniqueCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetUnlockedContractTags();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetRewardRow(FGameplayTag inRewardID, FIGS_UnlockReward& outRewardRow, bool& outFound);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetPendingRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccountVariableValue(FGameplayTag inTagUnlock);
    
    UFUNCTION(BlueprintCallable)
    void ConsumePendingReward(FGameplayTag inRewardID);
    
};

