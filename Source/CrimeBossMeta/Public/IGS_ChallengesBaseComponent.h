#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengeDataChangedDelegate.h"
#include "IGS_ChallengesCompletedDelegate.h"
#include "IGS_ChallengesBaseComponent.generated.h"

class UIGS_ChallengesDatabase;
class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ChallengesBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ChallengeDataChanged OnChallengeDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ChallengesCompleted OnChallengesCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> m_ChallengesInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> m_CompletedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ChallengesDatabase* m_ChallengesDatabase;
    
public:
    UIGS_ChallengesBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryResolveCompletedChallenges(bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeInProgressValue(FGameplayTag inTag, int32 InValue, bool inNotify);
    
    UFUNCTION(BlueprintCallable)
    void ResetChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRequiredCompletedChallenges(FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetCompletedChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompletedChallengeCount(FGameplayTag inTag, bool inExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetChallengesInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChallengeInProgressValue(FGameplayTag inTag, bool inExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChallengeBeProgressed(FGameplayTag inTag) const;
    
};

