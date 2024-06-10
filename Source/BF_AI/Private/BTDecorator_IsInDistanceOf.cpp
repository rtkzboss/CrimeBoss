#include "BTDecorator_IsInDistanceOf.h"

UBTDecorator_IsInDistanceOf::UBTDecorator_IsInDistanceOf() {
    (*this).bIsBlackBoardDistance = true;
    auto& gen291 = (*this).DistanceBlackboardKey.AllowedTypes;
    gen291.Empty();
    gen291.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DistanceBlackboardKey, 0)) = 255;
    auto& gen292 = (*this).TargetBlackboardKey.AllowedTypes;
    gen292.Empty();
    gen292.AddDefaulted(2);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Is In Distance Of");
}


