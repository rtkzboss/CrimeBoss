#include "BTDecorator_OffenceType.h"

UBTDecorator_OffenceType::UBTDecorator_OffenceType() {
    auto& gen309 = (*this).OffenceDataKey.AllowedTypes;
    gen309.Empty();
    gen309.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Offence Type");
}


