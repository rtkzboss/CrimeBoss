#include "IGS_BTDecorator_IsStillFeared.h"

UIGS_BTDecorator_IsStillFeared::UIGS_BTDecorator_IsStillFeared() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).DesiredTimeWithoutFear.Min = 2.000000000e+01f;
    (*this).DesiredTimeWithoutFear.Max = 5.000000000e+01f;
    (*this).DesiredTimeWithoutFearZiptieAddon.Min = 7.000000000e+01f;
    (*this).DesiredTimeWithoutFearZiptieAddon.Max = 1.000000000e+02f;
    (*this).NodeName = TEXT("Is Still Feared");
}


