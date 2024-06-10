#include "BTTask_Revive.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_Revive::UBTTask_Revive() {
    auto& gen513 = (*this).CharToReviveKey.AllowedTypes;
    gen513.Empty();
    gen513.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharToReviveKey, 0)) = 255;
    (*this).DistanceToMove = 1.500000000e+02f;
    (*this).DistanceToStop = 5.000000000e+01f;
    auto& gen514 = (*this).LookPosKey.AllowedTypes;
    gen514.Empty();
    gen514.AddDefaulted(1);
    auto& gen515 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen515.Empty();
    gen515.AddDefaulted(1);
    (*this).bDontUsePathLengthLimiter = true;
    auto& gen516 = (*this).BlackboardKey.AllowedTypes;
    gen516.Empty();
    gen516.AddDefaulted(2);
    (*this).NodeName = TEXT("Revive");
}


