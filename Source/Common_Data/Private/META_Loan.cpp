#include "META_Loan.h"

FMETA_Loan::FMETA_Loan() {
    this->ActivatedDay = 0;
    this->BorrowedCash = 0.00f;
    this->DailyRepaymentInPercentsFromBorrowedCash = 0;
    this->DaysToRepay = 0;
    this->CooldownToNextOffer = 0;
}

