#include "IGS_CharacterTraits.h"

FIGS_CharacterTraits::FIGS_CharacterTraits() {
    (*this).MaxHealth = 960;
    (*this).ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).AllowedWieldables, 0)) = 0;
    auto& gen1881 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AllowedWieldables, 0));
    gen1881.Empty();
    gen1881.AddDefaulted(1);
    auto& gen1882 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).AllowedWieldables, 0));
    gen1882.Empty();
    gen1882.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).AllowedWieldables, 0)) = TEXT("");
}

