#include "IGS_BTService_SentryTarget.h"

UIGS_BTService_SentryTarget::UIGS_BTService_SentryTarget() {
    auto& gen382 = (*this).BestTarget.AllowedTypes;
    gen382.Empty();
    gen382.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestTarget, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Best Target");
}


