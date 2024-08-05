#include "IGS_AIControllerDetective.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIDetectiveSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"
#include "Templates/SubclassOf.h"

AIGS_AIControllerDetective::AIGS_AIControllerDetective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CurrentDownstateHealth = -1.000000000e+00f;
    (*this).CurrentRevivesLeft = -1;
    (*this).MaxDownstateHealth = -1.000000000e+00f;
    (*this).GetUpTime.Min = -1.000000000e+00f;
    (*this).GetUpTime.Max = -1.000000000e+00f;
    (*this).RevivesToRetreat = 3;
    (*this).AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    (*this).ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    (*this).SettingsComponent = CreateDefaultSubobject<UIGS_AIDetectiveSettingsComponent>(TEXT("SettingsComponent"));
}

TSubclassOf<UMETA_DetectiveID> AIGS_AIControllerDetective::GetDetectiveID() const {
    return NULL;
}


