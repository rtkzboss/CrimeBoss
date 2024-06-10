#include "IGS_MeleeWeaponData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_MeleeAttackType.h"
#include "EIGS_WieldableClass.h"

FIGS_MeleeWeaponData::FIGS_MeleeWeaponData() {
    (*this).WwiseWeaponName = nullptr;
    (*this).AttackDefinitions.Empty();
    (*this).AIAttackDefinition.AttackType = EIGS_MeleeAttackType::MAT_Primary;
    (*this).AIAttackDefinition.DamageType = nullptr;
    (*this).AIAttackDefinition.ImpactType = nullptr;
    (*this).AIAttackDefinition.BaseDamage = 5.000000000e+01f;
    (*this).AIAttackDefinition.MaxRange = 1.000000000e+02f;
    (*this).AIAttackDefinition.TraceRadius = 3.000000000e+01f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WieldingOffence, 0)) = TEXT("Offence.Player.Wielding.Weapon");
    (*this).ItemType = EIGS_ItemType::Item_MeleeWeapon;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Weapon");
}

