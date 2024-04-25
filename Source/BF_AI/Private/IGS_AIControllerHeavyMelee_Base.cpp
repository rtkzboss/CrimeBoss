#include "IGS_AIControllerHeavyMelee_Base.h"
#include "IGS_AIHeavyMeleeSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerHeavyMelee_Base::AIGS_AIControllerHeavyMelee_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIHeavyMeleeSettingsComponent>(TEXT("SettingsComponent"));
}


