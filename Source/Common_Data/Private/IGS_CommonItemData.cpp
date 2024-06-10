#include "IGS_CommonItemData.h"

FIGS_CommonItemData::FIGS_CommonItemData() {
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).bShouldMove = true;
    (*this).HitImpactID = nullptr;
    (*this).HitImpactMass = 1.000000000e+00f;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = NAME_None;
    auto& gen1775 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).GrantedTags, 0));
    gen1775.Empty();
    auto& gen1776 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).GrantedTags, 0));
    gen1776.Empty();
    auto& gen1777 = (*this).GrantedAbilities;
    gen1777.Empty();
    auto& gen1778 = (*this).AppliedEffects;
    gen1778.Empty();
    (*this).ItemPropertyFlags = 1;
    (*this).MonetaryValue = 0;
    (*this).ModelScaleFPV = 1.000000000e+00f;
    (*this).ModelScale3PV = 1.000000000e+00f;
    auto& gen1779 = (*this).AdditionalPreloadClasses;
    gen1779.Empty();
    auto& gen1780 = (*this).AdditionalPreloadObjects;
    gen1780.Empty();
}

