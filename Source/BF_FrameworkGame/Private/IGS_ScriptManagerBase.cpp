#include "IGS_ScriptManagerBase.h"

AIGS_ScriptManagerBase::AIGS_ScriptManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScriptSeed = -1;
    this->bFinished = false;
    this->m_RandomStreamHolder = NULL;
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


