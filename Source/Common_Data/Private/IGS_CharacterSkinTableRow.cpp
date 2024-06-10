#include "IGS_CharacterSkinTableRow.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"

FIGS_CharacterSkinTableRow::FIGS_CharacterSkinTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).CharacterClasses.bIsMale = true;
    (*this).CharacterClasses.bIsMutable = false;
    (*this).CharacterClasses.MutableProfile = nullptr;
    (*this).CharacterClasses.PlayerPawnClass = nullptr;
    (*this).CharacterClasses.BotPawnClass = nullptr;
    (*this).CharacterClasses.PaperDollClass = nullptr;
    (*this).CharacterClasses.FPVArmsClass = nullptr;
    (*this).CharacterClasses.CharacterIcon = nullptr;
    (*this).CharacterClasses.MetaCharacterIcon = nullptr;
    (*this).CharacterClasses.VariantName = FText::FromString(TEXT(""));
    (*this).CharacterClasses.VariantDescription = FText::FromString(TEXT(""));
    (*this).CharacterClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = nullptr;
}

