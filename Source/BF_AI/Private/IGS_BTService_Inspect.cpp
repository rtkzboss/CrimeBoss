#include "IGS_BTService_Inspect.h"

UIGS_BTService_Inspect::UIGS_BTService_Inspect() {
    auto& gen368 = (*this).OffenceDataKey.AllowedTypes;
    gen368.Empty();
    gen368.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OffenceDataKey, 0)) = 255;
    (*this).NodeName = TEXT("Inspect");
}


