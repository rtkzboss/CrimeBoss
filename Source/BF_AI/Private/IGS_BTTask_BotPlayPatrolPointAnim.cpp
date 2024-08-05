#include "IGS_BTTask_BotPlayPatrolPointAnim.h"

UIGS_BTTask_BotPlayPatrolPointAnim::UIGS_BTTask_BotPlayPatrolPointAnim() {
    auto& gen0 = (*this).PatrolPointKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PatrolPointKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Play Patrol Point Anim");
}


