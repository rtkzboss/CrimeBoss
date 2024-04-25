#include "IGS_AIControllerHeavy_Minigunner.h"
#include "IGS_AIHeavyMinigunnerSettingsComponent.h"

AIGS_AIControllerHeavy_Minigunner::AIGS_AIControllerHeavy_Minigunner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsComponent = CreateDefaultSubobject<UIGS_AIHeavyMinigunnerSettingsComponent>(TEXT("SettingsComponent"));
}


