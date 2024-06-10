#include "BTTask_MoveToOffence.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToOffence::UBTTask_MoveToOffence() {
    auto& gen489 = (*this).OffenceDataKey.AllowedTypes;
    gen489.Empty();
    gen489.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    auto& gen490 = (*this).LookPosKey.AllowedTypes;
    gen490.Empty();
    gen490.AddDefaulted(1);
    auto& gen491 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen491.Empty();
    gen491.AddDefaulted(1);
    auto& gen492 = (*this).BlackboardKey.AllowedTypes;
    gen492.Empty();
    gen492.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Offence");
}


