#include "IGS_GeneratorVariantData.h"

FIGS_GeneratorVariantData::FIGS_GeneratorVariantData() {
    (*this).DataString = TEXT("");
    (*this).EnumByte = 0;
    (*this).Direction = 0;
    (*this).Event = 0;
    (*this).Position.X = 0.000000000e+00f;
    (*this).Position.Y = 0.000000000e+00f;
    (*this).Position.Z = 0.000000000e+00f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).GameplayTag, 0)) = NAME_None;
}

