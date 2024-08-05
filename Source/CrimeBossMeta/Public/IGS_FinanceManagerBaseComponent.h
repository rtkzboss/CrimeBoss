#pragma once
#include "CoreMinimal.h"
#include "META_Loan.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_FinancialBalanceChangedDelegate.h"
#include "IGS_FinancialManangerInitializedDelegate.h"
#include "IGS_FinanceManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_FinanceManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FinancialManangerInitialized OnManagerInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FinancialBalanceChanged OnBalanceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsManagerInitialized;
    
public:
    UIGS_FinanceManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsPlayerInBankruptState(bool& outResult, int32& outDaysLeftForRehabilitation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLoanActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTradeIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForDefense(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForAttackNeutral(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSoldiersCostForAttack(int32 inSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_Loan> GetProvidedLoans();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMissionIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMarketSpending();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLootNextDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<FGameplayTag, int32> GetLootDailyBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetIncome();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetHiredCrewSpending();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExpenses();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetDayBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCurrentCooldownBetweenLoans();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCrewUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCashNextDay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCashDailyBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetBalance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetArmyUpkeep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAllPlayerTilesIncome(int32& outCashValue, TMap<FGameplayTag, int32>& outLoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetActiveLoan(FMETA_Loan& outData, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBalance(int32 inAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanLoanBeTaken();
    
    UFUNCTION(BlueprintCallable)
    bool CanBuyItem(int32 inPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActivateLoan(FMETA_Loan inLoan);
    
};

