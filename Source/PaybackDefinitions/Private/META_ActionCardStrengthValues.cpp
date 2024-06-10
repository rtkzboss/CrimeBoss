#include "META_ActionCardStrengthValues.h"

FMETA_ActionCardStrengthValues::FMETA_ActionCardStrengthValues() {
    (*this).bNeedOverrideTitle = false;
    (*this).NewTitle = FText::FromString(TEXT(""));
    auto& gen1705 = (*this).Values;
    gen1705.Empty();
}

