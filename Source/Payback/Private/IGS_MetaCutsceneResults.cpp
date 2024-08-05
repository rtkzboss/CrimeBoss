#include "IGS_MetaCutsceneResults.h"

FIGS_MetaCutsceneResults::FIGS_MetaCutsceneResults() {
    (*this).DebugText = FText::FromString(TEXT(""));
    (*this).Result = 1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ResultTag, 0)) = NAME_None;
    (*this).HideLevel = true;
}

