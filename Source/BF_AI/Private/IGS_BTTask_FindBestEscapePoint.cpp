#include "IGS_BTTask_FindBestEscapePoint.h"

UIGS_BTTask_FindBestEscapePoint::UIGS_BTTask_FindBestEscapePoint() {
    auto& gen0 = (*this).EscapePointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).EscapePointKey, 0)) = 255;
    (*this).NodeName = TEXT("Find Best Escpae Point");
}


