#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelBuilder_LevelScriptActor::AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ObjectiveScenarioTemplate = NULL;
    this->ScriptManagerTemplate = NULL;
    this->DefaultSeed = -1;
    this->m_RandomStreamHolder = NULL;
}


void AIGS_LevelBuilder_LevelScriptActor::OnRep_Seed() {
}


void AIGS_LevelBuilder_LevelScriptActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LevelBuilder_LevelScriptActor, mR_RepProperties);
}


