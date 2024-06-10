#include "BTTask_ReactToOffence.h"

UBTTask_ReactToOffence::UBTTask_ReactToOffence() {
    auto& gen509 = (*this).OffenceDataKey.AllowedTypes;
    gen509.Empty();
    gen509.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("React To Offence");
}


