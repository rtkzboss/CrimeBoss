#include "IGS_PooledParticleNiagara.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "NiagaraComponent.h"

AIGS_PooledParticleNiagara::AIGS_PooledParticleNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    (*this).RootComponent = (USceneComponent*)NiagaraComponent;
}

void AIGS_PooledParticleNiagara::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


