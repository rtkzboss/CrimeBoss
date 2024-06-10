#include "IGS_BTTask_Subdue.h"

UIGS_BTTask_Subdue::UIGS_BTTask_Subdue() {
    auto& gen0 = (*this).CharToSubdueKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).CharToSubdueKey, 0)) = 255;
    (*this).NodeName = TEXT("Subdue");
}


