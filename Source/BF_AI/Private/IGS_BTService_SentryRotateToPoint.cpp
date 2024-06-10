#include "IGS_BTService_SentryRotateToPoint.h"

UIGS_BTService_SentryRotateToPoint::UIGS_BTService_SentryRotateToPoint() {
    auto& gen381 = (*this).TargetPoint.AllowedTypes;
    gen381.Empty();
    gen381.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetPoint, 0)) = 255;
    (*this).NodeName = TEXT("Sentry Rotate To Point");
}


