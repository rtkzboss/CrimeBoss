#include "IGS_BTDecorator_IsStillDuty.h"

UIGS_BTDecorator_IsStillDuty::UIGS_BTDecorator_IsStillDuty() {
    auto& gen295 = (*this).OffenceDataKey.AllowedTypes;
    gen295.Empty();
    gen295.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Is Still Duty");
}


