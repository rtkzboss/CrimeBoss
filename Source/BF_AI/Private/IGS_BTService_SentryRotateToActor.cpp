#include "IGS_BTService_SentryRotateToActor.h"

UIGS_BTService_SentryRotateToActor::UIGS_BTService_SentryRotateToActor() {
    auto& gen380 = (*this).TargetActor.AllowedTypes;
    gen380.Empty();
    gen380.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetActor, 0)) = 255;
    (*this).NodeName = TEXT("Sentry Rotate To Actor");
}


