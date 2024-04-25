#include "IGS_ProjectileInstant.h"

AIGS_ProjectileInstant::AIGS_ProjectileInstant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TracerEffectNiagara = NULL;
    this->TracerEffectNiagaraFPV = NULL;
    this->TracerEffectNiagaraChance = 0.00f;
    this->TracerEffectNiagaraChanceFPV = 0.00f;
}


