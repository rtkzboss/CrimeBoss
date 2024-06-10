#include "IGS_BTService_EvaluateThrowingComponents.h"

UIGS_BTService_EvaluateThrowingComponents::UIGS_BTService_EvaluateThrowingComponents() {
    auto& gen345 = (*this).BestLootCollection.AllowedTypes;
    gen345.Empty();
    gen345.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCollection, 0)) = 255;
    auto& gen346 = (*this).BestLootCarryable.AllowedTypes;
    gen346.Empty();
    gen346.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootCarryable, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Throwing Components");
}


