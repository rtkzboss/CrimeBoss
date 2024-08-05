#include "IGS_GadgetData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GadgetData::FIGS_GadgetData() {
    (*this).ItemType = EIGS_ItemType::Item_Gadget;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Gadget");
}

