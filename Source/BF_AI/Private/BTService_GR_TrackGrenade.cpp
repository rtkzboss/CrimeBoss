#include "BTService_GR_TrackGrenade.h"

UBTService_GR_TrackGrenade::UBTService_GR_TrackGrenade() {
    auto& gen364 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen364.Empty();
    gen364.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen365 = (*this).GrenadeActorKey.AllowedTypes;
    gen365.Empty();
    gen365.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GrenadeActorKey, 0)) = 255;
    (*this).SafePeriod = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Track Grenade");
}


