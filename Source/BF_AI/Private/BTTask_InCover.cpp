#include "BTTask_InCover.h"

UBTTask_InCover::UBTTask_InCover() {
    auto& gen0 = (*this).CoverForwardPointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPointKey, 0)) = 255;
    (*this).RotationDelay = 8.000000119e-01f;
    auto& gen1 = (*this).BlackboardKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*this).NodeName = TEXT("In Cover");
}


