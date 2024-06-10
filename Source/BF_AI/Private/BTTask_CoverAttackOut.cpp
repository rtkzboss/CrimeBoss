#include "BTTask_CoverAttackOut.h"

UBTTask_CoverAttackOut::UBTTask_CoverAttackOut() {
    (*this).CoverAttackType = EIGS_CoverAttackType::CAT_Unknown;
    auto& gen412 = (*this).TagretLastSeenPosition.AllowedTypes;
    gen412.Empty();
    gen412.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TagretLastSeenPosition, 0)) = 255;
    auto& gen413 = (*this).CoverForwardPoint.AllowedTypes;
    gen413.Empty();
    gen413.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPoint, 0)) = 255;
    (*this).NodeName = TEXT("Peak From Cover");
}


