#include "BTTask_SetRoationFromDefendPoint.h"

UBTTask_SetRoationFromDefendPoint::UBTTask_SetRoationFromDefendPoint() {
    auto& gen0 = (*this).LookPosKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Roation From Defend Point");
}


