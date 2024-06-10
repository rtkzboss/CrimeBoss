#include "IGS_BTService_IsSniperCompromised.h"

UIGS_BTService_IsSniperCompromised::UIGS_BTService_IsSniperCompromised() {
    auto& gen369 = (*this).IsCompromisedKey.AllowedTypes;
    gen369.Empty();
    gen369.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).IsCompromisedKey, 0)) = 255;
    (*this).NodeName = TEXT("IsSniperCompromised");
}


