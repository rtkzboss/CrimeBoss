#include "IGS_BTService_DetectiveHandleImmortality.h"

UIGS_BTService_DetectiveHandleImmortality::UIGS_BTService_DetectiveHandleImmortality() {
    auto& gen0 = (*this).ReviveChargesKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReviveChargesKey, 0)) = 255;
    auto& gen1 = (*this).DetectiveInitKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DetectiveInitKey, 0)) = 255;
    (*this).NodeName = TEXT("Detective Handle Immortality");
}


