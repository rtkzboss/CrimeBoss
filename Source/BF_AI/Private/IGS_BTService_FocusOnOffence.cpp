#include "IGS_BTService_FocusOnOffence.h"

UIGS_BTService_FocusOnOffence::UIGS_BTService_FocusOnOffence() {
    auto& gen349 = (*this).OffenceDataKey.AllowedTypes;
    gen349.Empty();
    gen349.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Focus On Offence");
}


