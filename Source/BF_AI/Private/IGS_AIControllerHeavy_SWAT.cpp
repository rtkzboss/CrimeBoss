#include "IGS_AIControllerHeavy_SWAT.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_AIHeavySettingsComponent.h"

AIGS_AIControllerHeavy_SWAT::AIGS_AIControllerHeavy_SWAT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SettingsComponent = CreateDefaultSubobject<UIGS_AIHeavySettingsComponent>(TEXT("SettingsComponent"));
}


