#include "BTDecorator_GR_IsSafeFromGrenade.h"

UBTDecorator_GR_IsSafeFromGrenade::UBTDecorator_GR_IsSafeFromGrenade() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    (*this).CheckInterval.Min = 4.000000060e-01f;
    (*this).CheckInterval.Max = 6.000000238e-01f;
    (*this).ExplosionRangeMultiplier = 1.299999952e+00f;
    (*this).NodeName = TEXT("Is Safe from Grenade");
}


