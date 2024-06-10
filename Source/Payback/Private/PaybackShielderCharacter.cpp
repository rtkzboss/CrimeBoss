#include "PaybackShielderCharacter.h"
#include "IGS_WeakSpotComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"

APaybackShielderCharacter::APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).m_WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
}


