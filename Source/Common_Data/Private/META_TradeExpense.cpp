#include "META_TradeExpense.h"

FMETA_TradeExpense::FMETA_TradeExpense() {
    (*this).ExpenseType = EMETA_TradeExpenseType::Money;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootCategory, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EconomyVariable, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).GraphVariable, 0)) = NAME_None;
    (*this).Alternative = false;
}

