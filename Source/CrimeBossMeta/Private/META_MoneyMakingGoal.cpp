#include "META_MoneyMakingGoal.h"
#include "EMETA_GoalType.h"

UMETA_MoneyMakingGoal::UMETA_MoneyMakingGoal() {
    this->Type = EMETA_GoalType::MoneyMaking;
}

void UMETA_MoneyMakingGoal::SetMonetaryValue(int32 inMonetaryValue) {
}

int32 UMETA_MoneyMakingGoal::GetMonetaryValue() {
    return 0;
}

FGameplayTag UMETA_MoneyMakingGoal::GetLootType() {
    return FGameplayTag{};
}


