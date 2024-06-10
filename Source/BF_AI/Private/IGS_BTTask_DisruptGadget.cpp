#include "IGS_BTTask_DisruptGadget.h"

UIGS_BTTask_DisruptGadget::UIGS_BTTask_DisruptGadget() {
    auto& gen414 = (*this).DisruptingGadget.AllowedTypes;
    gen414.Empty();
    gen414.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DisruptingGadget, 0)) = 255;
    (*this).NodeName = TEXT("Disrupt Gadget");
}


