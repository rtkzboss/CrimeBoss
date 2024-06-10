#include "IGS_BTTask_ThrowBags.h"

UIGS_BTTask_ThrowBags::UIGS_BTTask_ThrowBags() {
    auto& gen545 = (*this).ThrowRequestKey.AllowedTypes;
    gen545.Empty();
    gen545.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ThrowRequestKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Loot");
}


