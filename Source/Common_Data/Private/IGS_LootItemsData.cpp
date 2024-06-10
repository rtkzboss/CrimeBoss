#include "IGS_LootItemsData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"

FIGS_LootItemsData::FIGS_LootItemsData() {
    (*this).LootSize = EIGS_LootSize::Medium;
    (*this).SmallHits = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).LootCategoryTag, 0)) = TEXT("Loot.None");
    (*this).ItemType = EIGS_ItemType::Item_Loot;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Valuable");
}

