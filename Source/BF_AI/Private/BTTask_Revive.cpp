#include "BTTask_Revive.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_Revive::UBTTask_Revive() {
    auto& gen0 = (*this).CharToReviveKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharToReviveKey, 0)) = 255;
    (*this).DistanceToMove = 1.500000000e+02f;
    (*this).DistanceToStop = 5.000000000e+01f;
    auto& gen1 = (*this).LookPosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*this).bDontUsePathLengthLimiter = true;
    auto& gen3 = (*this).BlackboardKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(2);
    (*this).NodeName = TEXT("Revive");
}


