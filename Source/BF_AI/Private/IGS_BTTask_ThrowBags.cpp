#include "IGS_BTTask_ThrowBags.h"

UIGS_BTTask_ThrowBags::UIGS_BTTask_ThrowBags() {
    auto& gen0 = (*this).ThrowRequestKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Loot");
}


