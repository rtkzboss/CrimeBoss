#include "EndGameCutscenesDefinitionRow.h"

FEndGameCutscenesDefinitionRow::FEndGameCutscenesDefinitionRow() {
    (*this).CutsceneID = FText::FromString(TEXT(""));
    (*this).Movie = nullptr;
    (*this).EndReason.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).AssetTag, 0)) = NAME_None;
    (*this).Gang = EMETA_Gang::None;
}

