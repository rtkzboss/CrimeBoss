#include "IGS_AmmoTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_AmmoTableRow::FIGS_AmmoTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ItemType = EIGS_ItemType::Item_Ammo;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.Image = nullptr;
    (*this).Data.PickupMesh = nullptr;
    (*this).Data.PickupMeshSkeletal = nullptr;
    (*this).Data.ItemPickUpAudioEvent = nullptr;
    (*this).Data.ItemThrowAudioEvent = nullptr;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)).Empty();
    (*this).Data.GrantedAbilities.Empty();
    (*this).Data.AppliedEffects.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses.Empty();
    (*this).Data.AdditionalPreloadObjects.Empty();
}

