#include "PaybackBackupHeisterCharacter.h"
#include "IGS_HeisterBackupObjectStatus.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"

APaybackBackupHeisterCharacter::APaybackBackupHeisterCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_HeisterBackupObjectStatus>(TEXT("Object Status"))) {
    (*this).bIsValidForAimAssist = false;
}


