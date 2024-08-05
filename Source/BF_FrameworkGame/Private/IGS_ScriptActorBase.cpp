#include "IGS_ScriptActorBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_ScriptActorBase::AIGS_ScriptActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
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


