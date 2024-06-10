#include "IGS_BTService_SentryRotateToPoint.h"

UIGS_BTService_SentryRotateToPoint::UIGS_BTService_SentryRotateToPoint() {
    auto& gen0 = (*this).TargetPoint.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetPoint, 0)) = 255;
    (*this).NodeName = TEXT("Sentry Rotate To Point");
}


