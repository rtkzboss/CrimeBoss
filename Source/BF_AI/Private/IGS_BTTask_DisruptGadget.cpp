#include "IGS_BTTask_DisruptGadget.h"

UIGS_BTTask_DisruptGadget::UIGS_BTTask_DisruptGadget() {
    auto& gen0 = (*this).DisruptingGadget.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DisruptingGadget, 0)) = 255;
    (*this).NodeName = TEXT("Disrupt Gadget");
}


