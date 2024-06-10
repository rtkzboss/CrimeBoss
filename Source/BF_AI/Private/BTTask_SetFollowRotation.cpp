#include "BTTask_SetFollowRotation.h"

UBTTask_SetFollowRotation::UBTTask_SetFollowRotation() {
    auto& gen525 = (*this).LookPosKey.AllowedTypes;
    gen525.Empty();
    gen525.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).LookPosKey, 0)) = 255;
    (*this).NodeName = TEXT("Set Follow Rotation");
}


