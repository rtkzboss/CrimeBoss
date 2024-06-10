#include "IGS_BTService_EvaluateScriptedBehavior.h"

UIGS_BTService_EvaluateScriptedBehavior::UIGS_BTService_EvaluateScriptedBehavior() {
    auto& gen344 = (*this).PickupBagKey.AllowedTypes;
    gen344.Empty();
    gen344.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PickupBagKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Scripted Behavior");
}


