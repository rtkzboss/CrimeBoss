#include "IGS_BTService_EvaluateLooting.h"

UIGS_BTService_EvaluateLooting::UIGS_BTService_EvaluateLooting() {
    auto& gen0 = (*this).BestLootingCollection.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    auto& gen1 = (*this).BestLootCarryable.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Looting");
}


