#include "BTService_GR_EvadeGrenade.h"

UBTService_GR_EvadeGrenade::UBTService_GR_EvadeGrenade() {
    auto& gen353 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen353.Empty();
    gen353.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen354 = (*this).BestEvadePosKey.AllowedTypes;
    gen354.Empty();
    gen354.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    (*this).NodeName = TEXT("GlobalReaction - Evade Grenade");
}


