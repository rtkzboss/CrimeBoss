#include "BTTask_InCover.h"

UBTTask_InCover::UBTTask_InCover() {
    auto& gen444 = (*this).CoverForwardPointKey.AllowedTypes;
    gen444.Empty();
    gen444.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CoverForwardPointKey, 0)) = 255;
    (*this).RotationDelay = 8.000000119e-01f;
    auto& gen445 = (*this).BlackboardKey.AllowedTypes;
    gen445.Empty();
    gen445.AddDefaulted(1);
    (*this).NodeName = TEXT("In Cover");
}


