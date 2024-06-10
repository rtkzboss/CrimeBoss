#include "IGS_BTService_OutlineOffence.h"

UIGS_BTService_OutlineOffence::UIGS_BTService_OutlineOffence() {
    auto& gen375 = (*this).OffenceDataKey.AllowedTypes;
    gen375.Empty();
    gen375.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Outline Offence");
}


