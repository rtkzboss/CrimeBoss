#include "IGS_PlotlineSelectionStarItem.h"

FIGS_PlotlineSelectionStarItem::FIGS_PlotlineSelectionStarItem() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*this).Description = FText::FromString(TEXT(""));
}

