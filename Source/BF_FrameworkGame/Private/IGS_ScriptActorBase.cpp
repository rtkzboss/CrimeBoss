#include "IGS_ScriptActorBase.h"

AIGS_ScriptActorBase::AIGS_ScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->Seed = 0;
    this->m_ScriptManager = NULL;
}

void AIGS_ScriptActorBase::Setup(int32 InSeed) {
}

void AIGS_ScriptActorBase::Server_SetupInternal_Implementation() {
}

FRandomStream AIGS_ScriptActorBase::RandomStreamGetter() const {
    return FRandomStream{};
}


UIGS_RandomStreamHolder* AIGS_ScriptActorBase::GetRandomStreamHolder() {
    return NULL;
}

void AIGS_ScriptActorBase::GetRandomStream(FRandomStream& outRandomStream) {
}


