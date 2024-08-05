#include "BTService_GR_FleeFromArea.h"

UBTService_GR_FleeFromArea::UBTService_GR_FleeFromArea() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen1 = (*this).EvadePosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EvadePosKey, 0)) = 255;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee from Area");
}


