#include "IGS_BTService_EvaluateDisruptingGadgets.h"

UIGS_BTService_EvaluateDisruptingGadgets::UIGS_BTService_EvaluateDisruptingGadgets() {
    auto& gen339 = (*this).BestGadget.AllowedTypes;
    gen339.Empty();
    gen339.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestGadget, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Disrupting Gadgets");
}


