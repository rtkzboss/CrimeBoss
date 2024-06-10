#include "BTTask_SetUpdateCover.h"

UBTTask_SetUpdateCover::UBTTask_SetUpdateCover() {
    auto& gen527 = (*this).UpdateCoverKey.AllowedTypes;
    gen527.Empty();
    gen527.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).UpdateCoverKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Update Cover");
}


