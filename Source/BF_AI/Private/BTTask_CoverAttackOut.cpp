#include "BTTask_CoverAttackOut.h"

UBTTask_CoverAttackOut::UBTTask_CoverAttackOut() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    auto& gen0 = (*this).TagretLastSeenPosition.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TagretLastSeenPosition, 0)) = 255;
    auto& gen1 = (*this).CoverForwardPoint.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPoint, 0)) = 255;
    (*this).NodeName = TEXT("Peak From Cover");
}


