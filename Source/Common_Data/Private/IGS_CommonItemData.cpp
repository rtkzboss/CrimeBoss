#include "IGS_CommonItemData.h"

FIGS_CommonItemData::FIGS_CommonItemData() {
    (*this).ItemType = EIGS_ItemType::Item_UNKNOWN;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).bShouldMove = true;
    (*this).Image = nullptr;
    (*this).PickupMesh = nullptr;
    (*this).PickupMeshSkeletal = nullptr;
    (*this).ItemPickUpAudioEvent = nullptr;
    (*this).ItemThrowAudioEvent = nullptr;
    (*this).HitImpactID = nullptr;
    (*this).HitImpactMass = 1.000000000e+00f;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).GrantedTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).GrantedTags, 0)).Empty();
    (*this).GrantedAbilities.Empty();
    (*this).AppliedEffects.Empty();
    (*this).ItemPropertyFlags = 1;
    (*this).MonetaryValue = 0;
    (*this).ModelScaleFPV = 1.000000000e+00f;
    (*this).ModelScale3PV = 1.000000000e+00f;
    (*this).AdditionalPreloadClasses.Empty();
    (*this).AdditionalPreloadObjects.Empty();
}

