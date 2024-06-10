#include "IGS_BTTask_Loot.h"

UIGS_BTTask_Loot::UIGS_BTTask_Loot() {
    auto& gen451 = (*this).BestLootingCollection.AllowedTypes;
    gen451.Empty();
    gen451.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Loot");
}


