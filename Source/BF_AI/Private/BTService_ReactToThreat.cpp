#include "BTService_ReactToThreat.h"

UBTService_ReactToThreat::UBTService_ReactToThreat() {
    auto& gen377 = (*this).BestCoverKey.AllowedTypes;
    gen377.Empty();
    gen377.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestCoverKey, 0)) = 255;
    auto& gen378 = (*this).NeedReactToThreathKey.AllowedTypes;
    gen378.Empty();
    gen378.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).NeedReactToThreathKey, 0)) = 255;
    (*this).NodeName = TEXT("React to threath");
}


