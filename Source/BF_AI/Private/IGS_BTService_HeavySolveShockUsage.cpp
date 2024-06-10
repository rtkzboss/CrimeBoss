#include "IGS_BTService_HeavySolveShockUsage.h"

UIGS_BTService_HeavySolveShockUsage::UIGS_BTService_HeavySolveShockUsage() {
    auto& gen367 = (*this).ShouldUseShockKey.AllowedTypes;
    gen367.Empty();
    gen367.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).ShouldUseShockKey, 0)) = 255;
    (*this).NodeName = TEXT("Solve Heavy Shock Usage");
}


