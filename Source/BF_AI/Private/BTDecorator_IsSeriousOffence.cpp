#include "BTDecorator_IsSeriousOffence.h"

UBTDecorator_IsSeriousOffence::UBTDecorator_IsSeriousOffence() {
    auto& gen294 = (*this).OffenceDataKey.AllowedTypes;
    gen294.Empty();
    gen294.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Serious Offence");
}


