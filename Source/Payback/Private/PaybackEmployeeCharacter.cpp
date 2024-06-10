#include "PaybackEmployeeCharacter.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"

APaybackEmployeeCharacter::APaybackEmployeeCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsValidForAimAssist = false;
}


