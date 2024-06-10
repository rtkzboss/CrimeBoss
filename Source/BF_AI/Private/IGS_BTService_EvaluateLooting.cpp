#include "IGS_BTService_EvaluateLooting.h"

UIGS_BTService_EvaluateLooting::UIGS_BTService_EvaluateLooting() {
    auto& gen340 = (*this).BestLootingCollection.AllowedTypes;
    gen340.Empty();
    gen340.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    auto& gen341 = (*this).BestLootCarryable.AllowedTypes;
    gen341.Empty();
    gen341.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Looting");
}


