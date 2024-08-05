#include "IGS_BTDecorator_OffenceIsSurprised.h"

UIGS_BTDecorator_OffenceIsSurprised::UIGS_BTDecorator_OffenceIsSurprised() {
    auto& gen0 = (*this).OffenceDataKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Offence Is Surprised");
}


