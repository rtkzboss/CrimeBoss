#include "META_VariableScopeDefinition.h"

FMETA_VariableScopeDefinition::FMETA_VariableScopeDefinition() {
    (*this).VariablesScope = EMETA_VariablesScope::Any;
    (*this).Variable = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).variableTag, 0)) = NAME_None;
}

