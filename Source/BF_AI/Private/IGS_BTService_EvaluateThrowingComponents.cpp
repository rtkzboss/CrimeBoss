#include "IGS_BTService_EvaluateThrowingComponents.h"

UIGS_BTService_EvaluateThrowingComponents::UIGS_BTService_EvaluateThrowingComponents() {
    auto& gen0 = (*this).BestLootCollection.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCollection, 0)) = 255;
    auto& gen1 = (*this).BestLootCarryable.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Throwing Components");
}


