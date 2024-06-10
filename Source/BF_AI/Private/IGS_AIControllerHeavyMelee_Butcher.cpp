#include "IGS_AIControllerHeavyMelee_Butcher.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"

AIGS_AIControllerHeavyMelee_Butcher::AIGS_AIControllerHeavyMelee_Butcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SawBrokenAnimation, 0)) = TEXT("Anim.Reaction.ButcherExplode");
}

void AIGS_AIControllerHeavyMelee_Butcher::NotifySawBroke() {
}


