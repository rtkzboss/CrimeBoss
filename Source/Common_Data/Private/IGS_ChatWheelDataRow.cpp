#include "IGS_ChatWheelDataRow.h"

FIGS_ChatWheelDataRow::FIGS_ChatWheelDataRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).FPSChatText = FText::FromString(TEXT(""));
    (*this).IconChar = FText::FromString(TEXT(""));
    (*this).StealthVOID = FText::FromString(TEXT(""));
    (*this).CombatVOID = FText::FromString(TEXT(""));
}

