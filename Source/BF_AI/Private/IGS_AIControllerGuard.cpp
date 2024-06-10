#include "IGS_AIControllerGuard.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIGuardSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"

AIGS_AIControllerGuard::AIGS_AIControllerGuard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    (*this).ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    (*this).SettingsComponent = CreateDefaultSubobject<UIGS_AIGuardSettingsComponent>(TEXT("SettingsComponent"));
}


