#include "StashLootDefinitionRow.h"

FStashLootDefinitionRow::FStashLootDefinitionRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).PayButtonText = FText::FromString(TEXT(""));
}

