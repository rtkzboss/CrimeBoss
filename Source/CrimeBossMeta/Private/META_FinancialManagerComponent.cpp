#include "META_FinancialManagerComponent.h"

UMETA_FinancialManagerComponent::UMETA_FinancialManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CooldownToNextOffer = 0;
    this->Balance = 0;
    this->DayWhenPlayerReachedBankruptState = 0;
    this->HiredCrewSpending = 0;
    this->MarketSpending = 0;
    this->MissionIncome = 0;
    this->TradeIncome = 0;
    this->OtherIncome = 0;
    this->OtherSpending = 0;
    this->InitialBalance = 0;
}


