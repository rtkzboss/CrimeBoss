#include "PaybackPlayerCharacter.h"
#include "IGS_NetworkComponentAnimation.h"
#include "IGS_NetworkComponentCharacter.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"

APaybackPlayerCharacter::APaybackPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NetworkCharacter = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    (*this).NetworkAnimation = CreateDefaultSubobject<UIGS_NetworkComponentAnimation>(TEXT("NetworkComponentAnimation"));
    (*this).NetPriority = 4.000000000e+00f;
}


