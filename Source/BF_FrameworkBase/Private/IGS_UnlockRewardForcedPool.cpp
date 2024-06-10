#include "IGS_UnlockRewardForcedPool.h"

FIGS_UnlockRewardForcedPool::FIGS_UnlockRewardForcedPool() {
    (*this).Level = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Item, 0)) = NAME_None;
    (*this).AllowedQuality = 0;
}

