#include "META_FinanceManagerSaveData.h"

FMETA_FinanceManagerSaveData::FMETA_FinanceManagerSaveData() {
    (*this).Balance = 0;
    (*this).HiredCrewSpending = 0;
    (*this).MarketSpending = 0;
    (*this).DayWhenPlayerReachedBankruptState = 0;
    (*this).CurrentLoan.ActivatedDay = 0;
    (*this).CurrentLoan.BorrowedCash = 0.000000000e+00f;
    (*this).CurrentLoan.DailyRepaymentInPercentsFromBorrowedCash = 0;
    (*this).CurrentLoan.DaysToRepay = 0;
    (*this).CurrentLoan.CooldownToNextOffer = 0;
    (*this).CooldownToNextOffer = 0;
    (*this).MissionIncome = 0;
    (*this).TradeIncome = 0;
    (*this).OtherIncome = 0;
    (*this).OtherSpending = 0;
}

