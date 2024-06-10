#include "IGS_BTService_EvaluateMountedGunUsage.h"

UIGS_BTService_EvaluateMountedGunUsage::UIGS_BTService_EvaluateMountedGunUsage() {
    auto& gen342 = (*this).BestMountedGunKey.AllowedTypes;
    gen342.Empty();
    gen342.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestMountedGunKey, 0)) = 255;
    (*this).NodeName = TEXT("Evaluate Mounted Gun Usage");
}


