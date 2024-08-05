#include "BTDecorator_ReactToThreat.h"

UBTDecorator_ReactToThreat::UBTDecorator_ReactToThreat() {
    auto& gen0 = (*this).ReactToThreathKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}


