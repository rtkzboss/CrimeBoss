#include "IGS_BTService_IsSniperCompromised.h"

UIGS_BTService_IsSniperCompromised::UIGS_BTService_IsSniperCompromised() {
    auto& gen0 = (*this).IsCompromisedKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsCompromisedKey, 0)) = 255;
    (*this).NodeName = TEXT("IsSniperCompromised");
}


