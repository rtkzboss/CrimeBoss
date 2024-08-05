#include "BTTask_MoveToOffence.h"
#include "EIGS_CharacterVsHeistersCollisionStatus.h"

UBTTask_MoveToOffence::UBTTask_MoveToOffence() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    auto& gen1 = (*this).LookPosKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    auto& gen2 = (*this).AcceptableRadiusKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    auto& gen3 = (*this).BlackboardKey.AllowedTypes;
    gen3.Empty();
    gen3.AddDefaulted(2);
    (*this).NodeName = TEXT("Move To Offence");
}


