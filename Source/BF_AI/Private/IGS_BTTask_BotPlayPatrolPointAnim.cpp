#include "IGS_BTTask_BotPlayPatrolPointAnim.h"

UIGS_BTTask_BotPlayPatrolPointAnim::UIGS_BTTask_BotPlayPatrolPointAnim() {
    auto& gen407 = (*this).PatrolPointKey.AllowedTypes;
    gen407.Empty();
    gen407.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PatrolPointKey, 0)) = 255;
    (*this).NodeName = TEXT("Bot Play Patrol Point Anim");
}


