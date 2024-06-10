#include "IGS_IdlePoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"

AIGS_IdlePoint::AIGS_IdlePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MinTimeUntilBreaker = 1.500000000e+01f;
    (*this).MaxTimeUntilBreaker = 6.000000000e+01f;
    (*this).MinWaitTime = 6.000000000e+01f;
    (*this).MaxWaitTime = 1.200000000e+02f;
    auto& gen0 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AnimationsToPlayTag, 0));
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AnimationsToPlayTag, 0));
    gen1.Empty();
    gen1.AddDefaulted(2);
}


