#include "BTService_GR_TrackGrenade.h"

UBTService_GR_TrackGrenade::UBTService_GR_TrackGrenade() {
    auto& gen0 = (*this).GeneralReactionDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GeneralReactionDataKey, 0)) = 255;
    auto& gen1 = (*this).GrenadeActorKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).GrenadeActorKey, 0)) = 255;
    (*this).SafePeriod = 1.000000000e+00f;
    (*this).NodeName = TEXT("GlobalReaction - Track Grenade");
}


