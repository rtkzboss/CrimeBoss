#include "BTDecorator_WantsInspectOffence.h"

UBTDecorator_WantsInspectOffence::UBTDecorator_WantsInspectOffence() {
    auto& gen312 = (*this).OffenceDataKey.AllowedTypes;
    gen312.Empty();
    gen312.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Inspect Offence");
}


