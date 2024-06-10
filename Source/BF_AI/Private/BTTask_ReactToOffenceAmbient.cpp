#include "BTTask_ReactToOffenceAmbient.h"

UBTTask_ReactToOffenceAmbient::UBTTask_ReactToOffenceAmbient() {
    auto& gen402 = (*this).OffenceDataKey.AllowedTypes;
    gen402.Empty();
    gen402.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("ReactToOffenceAmbient");
}


