#include "IGS_LoadingScreenTipsRow.h"

FIGS_LoadingScreenTipsRow::FIGS_LoadingScreenTipsRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Tips.Empty();
    (*this).ControllerTips.Empty();
    (*this).KeyboardMouseTips.Empty();
}

