#include "PaybackShielderCharacter.h"
#include "IGS_WeakSpotComponent.h"

APaybackShielderCharacter::APaybackShielderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WeakSpotComponent = CreateDefaultSubobject<UIGS_WeakSpotComponent>(TEXT("WeakSpot Component"));
}


