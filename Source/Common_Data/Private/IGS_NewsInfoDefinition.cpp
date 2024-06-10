#include "IGS_NewsInfoDefinition.h"

FIGS_NewsInfoDefinition::FIGS_NewsInfoDefinition() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).itemTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).Title = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).BinkAlpha = nullptr;
    (*this).BinkRGB = nullptr;
    (*this).ShowInMenu = false;
}

