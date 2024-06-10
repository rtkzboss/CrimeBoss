#include "IGS_AIControllerSniper.h"
#include "IGS_AISniperSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerSniper::AIGS_AIControllerSniper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AISniperSettingsComponent>(TEXT("SettingsComponent"));
}

void AIGS_AIControllerSniper::OnHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) const {
}


