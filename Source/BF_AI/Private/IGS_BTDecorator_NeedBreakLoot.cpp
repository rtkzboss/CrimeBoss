#include "IGS_BTDecorator_NeedBreakLoot.h"

UIGS_BTDecorator_NeedBreakLoot::UIGS_BTDecorator_NeedBreakLoot() {
    auto& gen0 = (*this).BestLootingCollection.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Need Break Loot");
}


