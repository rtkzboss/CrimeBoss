#include "IGS_KeyItemTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_RoomSecurityType.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_KeyItemTableRow::FIGS_KeyItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.KeySecurity = EIGS_RoomSecurityType::Outside;
    (*this).Data.ItemType = EIGS_ItemType::Item_Key;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1886 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1886.Empty();
    auto& gen1887 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1887.Empty();
    auto& gen1888 = (*this).Data.GrantedAbilities;
    gen1888.Empty();
    auto& gen1889 = (*this).Data.AppliedEffects;
    gen1889.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1890 = (*this).Data.AdditionalPreloadClasses;
    gen1890.Empty();
    auto& gen1891 = (*this).Data.AdditionalPreloadObjects;
    gen1891.Empty();
}

