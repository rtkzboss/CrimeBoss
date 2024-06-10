#include "IGS_BTService_DetectiveHandleImmortality.h"

UIGS_BTService_DetectiveHandleImmortality::UIGS_BTService_DetectiveHandleImmortality() {
    auto& gen329 = (*this).ReviveChargesKey.AllowedTypes;
    gen329.Empty();
    gen329.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ReviveChargesKey, 0)) = 255;
    auto& gen330 = (*this).DetectiveInitKey.AllowedTypes;
    gen330.Empty();
    gen330.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DetectiveInitKey, 0)) = 255;
    (*this).NodeName = TEXT("Detective Handle Immortality");
}


