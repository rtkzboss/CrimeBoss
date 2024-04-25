#include "IGS_AIControllerDetective.h"
#include "IGS_AIDetectiveSettingsComponent.h"
#include "IGS_AIThreatComponent.h"
#include "IGS_AggroHandlerComponent.h"
#include "Templates/SubclassOf.h"

AIGS_AIControllerDetective::AIGS_AIControllerDetective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AggroHandlerComponent = CreateDefaultSubobject<UIGS_AggroHandlerComponent>(TEXT("AggroHandlerComponent"));
    this->ThreatComponent = CreateDefaultSubobject<UIGS_AIThreatComponent>(TEXT("ThreatComponent"));
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIDetectiveSettingsComponent>(TEXT("SettingsComponent"));
    this->CurrentDownstateHealth = -1.00f;
    this->CurrentRevivesLeft = -1;
    this->MaxDownstateHealth = -1.00f;
    this->RevivesToRetreat = 3;
    this->HideDownstateHealthBar = false;
    this->m_MyMetaID = NULL;
    this->m_IntelligentOwner = NULL;
}

TSubclassOf<UMETA_DetectiveID> AIGS_AIControllerDetective::GetDetectiveID() const {
    return NULL;
}


