#include "BTTask_PlayMocapAnimation.h"

UBTTask_PlayMocapAnimation::UBTTask_PlayMocapAnimation() {
    auto& gen508 = (*this).AnimationCommandKey.AllowedTypes;
    gen508.Empty();
    gen508.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AnimationCommandKey, 0)) = 255;
    (*this).NodeName = TEXT("Play Mocap Animation");
}


