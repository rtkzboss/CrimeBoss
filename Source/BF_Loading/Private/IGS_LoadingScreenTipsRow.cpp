#include "IGS_LoadingScreenTipsRow.h"

FIGS_LoadingScreenTipsRow::FIGS_LoadingScreenTipsRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto& gen1991 = (*this).Tips;
    gen1991.Empty();
    auto& gen1992 = (*this).ControllerTips;
    gen1992.Empty();
    auto& gen1993 = (*this).KeyboardMouseTips;
    gen1993.Empty();
}

