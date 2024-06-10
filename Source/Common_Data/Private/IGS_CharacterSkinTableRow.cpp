#include "IGS_CharacterSkinTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"

FIGS_CharacterSkinTableRow::FIGS_CharacterSkinTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).CharacterClasses.bIsMale = true;
    (*this).CharacterClasses.bIsMutable = false;
    (*this).CharacterClasses.VariantName = FText::FromString(TEXT(""));
    (*this).CharacterClasses.VariantDescription = FText::FromString(TEXT(""));
    (*this).CharacterClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1883 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1883.Empty();
    auto& gen1884 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1884.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
}

