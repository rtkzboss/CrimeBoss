#include "IGS_BTService_EvaluateScriptedBehavior.h"

UIGS_BTService_EvaluateScriptedBehavior::UIGS_BTService_EvaluateScriptedBehavior() {
    auto& gen0 = (*this).PickupBagKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PickupBagKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Scripted Behavior");
}


