#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelBuilder_LevelScriptActor::AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DefaultMissionTag, 0)) = TEXT("Mission.Unknown");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DefaultScenarioTag, 0)) = TEXT("Mission.Unknown");
    (*this).DefaultSeed = -1;
    (*this).NetDormancy = DORM_DormantAll;
    (*this).NetPriority = 5.000000000e+00f;
}


void AIGS_LevelBuilder_LevelScriptActor::OnRep_Seed() {
}


void AIGS_LevelBuilder_LevelScriptActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LevelBuilder_LevelScriptActor, mR_RepProperties);
}


