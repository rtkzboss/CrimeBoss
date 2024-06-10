#include "IGS_BTService_EvaluateDisruptingGadgets.h"

UIGS_BTService_EvaluateDisruptingGadgets::UIGS_BTService_EvaluateDisruptingGadgets() {
    auto& gen0 = (*this).BestGadget.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestGadget, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Disrupting Gadgets");
}


