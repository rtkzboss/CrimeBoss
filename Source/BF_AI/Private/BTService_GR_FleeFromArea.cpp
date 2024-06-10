#include "BTService_GR_FleeFromArea.h"

UBTService_GR_FleeFromArea::UBTService_GR_FleeFromArea() {
    auto& gen360 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen360.Empty();
    gen360.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen361 = (*this).EvadePosKey.AllowedTypes;
    gen361.Empty();
    gen361.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EvadePosKey, 0)) = 255;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee from Area");
}


