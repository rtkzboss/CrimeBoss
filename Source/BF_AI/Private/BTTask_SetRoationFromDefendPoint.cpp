#include "BTTask_SetRoationFromDefendPoint.h"

UBTTask_SetRoationFromDefendPoint::UBTTask_SetRoationFromDefendPoint() {
    auto& gen526 = (*this).LookPosKey.AllowedTypes;
    gen526.Empty();
    gen526.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Roation From Defend Point");
}


