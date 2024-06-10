#include "IGS_BTTask_RotateFromWall.h"

UIGS_BTTask_RotateFromWall::UIGS_BTTask_RotateFromWall() {
    auto& gen518 = (*this).LookPosKey.AllowedTypes;
    gen518.Empty();
    gen518.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Rotate From Wall");
}


