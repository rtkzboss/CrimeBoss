#include "META_DetectiveTableRow.h"

FMETA_DetectiveTableRow::FMETA_DetectiveTableRow() {
    (*this).ID = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
}

