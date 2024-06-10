#include "IGS_PlotlineSelectionDefinition.h"

FIGS_PlotlineSelectionDefinition::FIGS_PlotlineSelectionDefinition() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).BackgroundImage = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).LockedMessage = FText::FromString(TEXT(""));
    (*this).StarItems.Empty();
    (*this).IsPlotline = false;
    (*this).IsDebugOnly = false;
}

