#include "BTDecorator_IsInDistanceOf.h"

UBTDecorator_IsInDistanceOf::UBTDecorator_IsInDistanceOf() {
    (*this).bIsBlackBoardDistance = true;
    auto& gen0 = (*this).DistanceBlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).DistanceBlackboardKey, 0)) = 255;
    auto& gen1 = (*this).TargetBlackboardKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(2);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetBlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Is In Distance Of");
}


