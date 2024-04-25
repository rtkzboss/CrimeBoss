#include "IGS_DangerAreaVolume.h"
#include "NavModifierComponent.h"

AIGS_DangerAreaVolume::AIGS_DangerAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEvents = false;
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
}

void AIGS_DangerAreaVolume::SetEnabled(bool inEnabled) {
}


