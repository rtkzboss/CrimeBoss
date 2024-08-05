#include "IGS_TileItemDataStruct.h"

FIGS_TileItemDataStruct::FIGS_TileItemDataStruct() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemId, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).Image = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Price = 0;
    (*this).IsNew = false;
    (*this).IsChallenge = false;
    (*this).HasCustomAction = false;
    (*this).CustomActionText = FText::FromString(TEXT(""));
    (*this).IsEquiped = false;
    (*this).CustomEquipedText = FText::FromString(TEXT(""));
    (*this).IsTaken = false;
    (*this).CustomTakenText = FText::FromString(TEXT(""));
    (*this).Rarity = EMETA_ItemQuality::None;
    (*this).State = EIGS_TileItemState::Locked;
    (*this).Category = EIGS_UnlockCategory::UC_Weapons;
}

