#include "IGS_PooledParticleNiagara.h"
#include "NiagaraComponent.h"

AIGS_PooledParticleNiagara::AIGS_PooledParticleNiagara(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->NiagaraComponent = (UNiagaraComponent*)RootComponent;
}

void AIGS_PooledParticleNiagara::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


