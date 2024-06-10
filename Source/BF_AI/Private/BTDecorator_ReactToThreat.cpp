#include "BTDecorator_ReactToThreat.h"

UBTDecorator_ReactToThreat::UBTDecorator_ReactToThreat() {
    auto& gen310 = (*this).ReactToThreathKey.AllowedTypes;
    gen310.Empty();
    gen310.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}


