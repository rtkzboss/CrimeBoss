#include "IGS_BTService_LookAimOnPoint.h"

UIGS_BTService_LookAimOnPoint::UIGS_BTService_LookAimOnPoint() {
    auto& gen0 = (*this).PointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PointKey, 0)) = 255;
    (*this).NodeName = TEXT("Look Aim On Point");
}


