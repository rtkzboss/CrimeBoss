#include "IGS_BTTask_OpenLootHolder.h"

UIGS_BTTask_OpenLootHolder::UIGS_BTTask_OpenLootHolder() {
    (*this).DelayAfterInteracting = 1.000000000e+00f;
    auto& gen504 = (*this).BestLootingCollection.AllowedTypes;
    gen504.Empty();
    gen504.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Open Loot Holder");
}


