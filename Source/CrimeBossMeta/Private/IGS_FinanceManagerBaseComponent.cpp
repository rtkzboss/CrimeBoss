#include "IGS_FinanceManagerBaseComponent.h"

UIGS_FinanceManagerBaseComponent::UIGS_FinanceManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

void UIGS_FinanceManagerBaseComponent::IsPlayerInBankruptState_Implementation(bool& outResult, int32& outDaysLeftForRehabilitation) {
}

bool UIGS_FinanceManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

bool UIGS_FinanceManagerBaseComponent::IsLoanActive_Implementation() {
    return false;
}

int32 UIGS_FinanceManagerBaseComponent::GetUpkeep_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetTradeIncome_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetSoldiersCostForDefense_Implementation(int32 inSoldiersAmount) {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetSoldiersCostForAttackNeutral_Implementation(int32 inSoldiersAmount) {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetSoldiersCostForAttack_Implementation(int32 inSoldiersAmount) {
    return 0;
}

TArray<FMETA_Loan> UIGS_FinanceManagerBaseComponent::GetProvidedLoans_Implementation() {
    return TArray<FMETA_Loan>();
}

int32 UIGS_FinanceManagerBaseComponent::GetMissionIncome_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetMarketSpending_Implementation() {
    return 0;
}

TMap<FGameplayTag, int32> UIGS_FinanceManagerBaseComponent::GetLootNextDay_Implementation() {
    return TMap<FGameplayTag, int32>();
}

TMap<FGameplayTag, int32> UIGS_FinanceManagerBaseComponent::GetLootDailyBalance_Implementation() {
    return TMap<FGameplayTag, int32>();
}

int32 UIGS_FinanceManagerBaseComponent::GetIncome_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetHiredCrewSpending_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetExpenses_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetDayBalance_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetCurrentCooldownBetweenLoans_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetCrewUpkeep_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetCashNextDay_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetCashDailyBalance_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetBalance_Implementation() {
    return 0;
}

int32 UIGS_FinanceManagerBaseComponent::GetArmyUpkeep_Implementation() {
    return 0;
}

void UIGS_FinanceManagerBaseComponent::GetAllPlayerTilesIncome_Implementation(int32& outCashValue, TMap<FGameplayTag, int32>& outLoot) {
}

void UIGS_FinanceManagerBaseComponent::GetActiveLoan_Implementation(FMETA_Loan& outData, bool& outSuccess) {
}


bool UIGS_FinanceManagerBaseComponent::CanLoanBeTaken_Implementation() {
    return false;
}

bool UIGS_FinanceManagerBaseComponent::CanBuyItem(int32 inPrice) {
    return false;
}

bool UIGS_FinanceManagerBaseComponent::ActivateLoan_Implementation(FMETA_Loan inLoan) {
    return false;
}


