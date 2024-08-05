#include "BTService_LookAt.h"

UBTService_LookAt::UBTService_LookAt() {
    auto& gen0 = (*this).LookAtBlackBoardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(2);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookAtBlackBoardKey, 0)) = 255;
    (*this).LookAtStartMaxAngle = 6.000000000e+01f;
    (*this).LookAtStopMaxAngle = 9.000000000e+01f;
    (*this).NodeName = TEXT("Look At Service");
}


