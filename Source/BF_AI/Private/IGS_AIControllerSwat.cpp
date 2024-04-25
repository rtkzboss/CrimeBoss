#include "IGS_AIControllerSwat.h"
#include "IGS_AISwatSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerSwat::AIGS_AIControllerSwat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AISwatSettingsComponent>(TEXT("SettingsComponent"));
}


