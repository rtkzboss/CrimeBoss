#include "BTService_ReactToThreat.h"

UBTService_ReactToThreat::UBTService_ReactToThreat() {
    auto& gen0 = (*this).BestCoverKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    auto& gen1 = (*this).NeedReactToThreathKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).NeedReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}


