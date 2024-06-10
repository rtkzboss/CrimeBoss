#include "IGS_BTService_FocusOnPoint.h"

UIGS_BTService_FocusOnPoint::UIGS_BTService_FocusOnPoint() {
    auto& gen0 = (*this).PointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PointKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Point");
}


