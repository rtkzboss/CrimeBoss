#include "IGS_MeleeWeaponTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WieldableClass.h"

FIGS_MeleeWeaponTableRow::FIGS_MeleeWeaponTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = nullptr;
    auto& gen1898 = (*this).Data.AttackDefinitions;
    gen1898.Empty();
    (*this).Data.AIAttackDefinition.AttackType = EIGS_MeleeAttackType::MAT_Primary;
    (*this).Data.AIAttackDefinition.DamageType = nullptr;
    (*this).Data.AIAttackDefinition.ImpactType = nullptr;
    (*this).Data.AIAttackDefinition.BaseDamage = 5.000000000e+01f;
    (*this).Data.AIAttackDefinition.MaxRange = 1.000000000e+02f;
    (*this).Data.AIAttackDefinition.TraceRadius = 3.000000000e+01f;
    (*this).Data.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).Data.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).Data.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).Data.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Data.Class = EIGS_WieldableClass::C_Generic;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ClassTag, 0)) = TEXT("Item.Wieldable");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.WieldingOffence, 0)) = TEXT("Offence.Player.Wielding.Weapon");
    (*this).Data.ItemType = EIGS_ItemType::Item_MeleeWeapon;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Weapon");
    auto& gen1899 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1899.Empty();
    auto& gen1900 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1900.Empty();
    auto& gen1901 = (*this).Data.GrantedAbilities;
    gen1901.Empty();
    auto& gen1902 = (*this).Data.AppliedEffects;
    gen1902.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1903 = (*this).Data.AdditionalPreloadClasses;
    gen1903.Empty();
    auto& gen1904 = (*this).Data.AdditionalPreloadObjects;
    gen1904.Empty();
}

