#include "IGS_BTDecorator_NeedBreakLoot.h"

UIGS_BTDecorator_NeedBreakLoot::UIGS_BTDecorator_NeedBreakLoot() {
    auto& gen305 = (*this).BestLootingCollection.AllowedTypes;
    gen305.Empty();
    gen305.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Need Break Loot");
}


