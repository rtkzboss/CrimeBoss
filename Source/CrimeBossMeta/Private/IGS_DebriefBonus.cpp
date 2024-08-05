#include "IGS_DebriefBonus.h"

FIGS_DebriefBonus::FIGS_DebriefBonus() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Tag, 0)) = NAME_None;
    (*this).BonusValue = 0;
    (*this).BonusName = FText::FromString(TEXT(""));
    (*this).BonusTextFormat = FText::FromString(TEXT(""));
    (*this).IsMoney = false;
}

