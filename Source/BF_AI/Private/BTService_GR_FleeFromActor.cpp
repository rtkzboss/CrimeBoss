#include "BTService_GR_FleeFromActor.h"

UBTService_GR_FleeFromActor::UBTService_GR_FleeFromActor() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen1 = (*this).BestEvadePosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestEvadePosKey, 0)) = 255;
    auto& gen2 = (*this).SafeDistanceKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).SafeDistanceKey, 0)) = 255;
    (*this).SafeDistance = 5.000000000e+02f;
    (*this).SafeDistanceFromBB = true;
    (*this).EQSCooldown = 1.000000000e+00f;
    (*this).InnerRangeMultiplier = 1.200000048e+00f;
    (*this).OuterRangeMultiplier = 1.700000048e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Flee From Actor");
}


