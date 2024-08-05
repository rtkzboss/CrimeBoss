#include "IGS_ScriptManagerBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_ScriptManagerBase::AIGS_ScriptManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ScriptSeed = -1;
}

void AIGS_ScriptManagerBase::SetManagerFinished() {
}




TArray<AIGS_ScriptActorBase*> AIGS_ScriptManagerBase::GetScriptsActorsWithTag(FName inTag) const {
    return TArray<AIGS_ScriptActorBase*>();
}

UIGS_RandomStreamHolder* AIGS_ScriptManagerBase::GetRandomStreamHolder() {
    return NULL;
}

FRandomStream AIGS_ScriptManagerBase::GetRandomStream_TEMP() {
    return FRandomStream{};
}

void AIGS_ScriptManagerBase::GetRandomStream(FRandomStream& outRandomStream) {
}


