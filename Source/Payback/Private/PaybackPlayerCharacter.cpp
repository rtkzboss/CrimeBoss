#include "PaybackPlayerCharacter.h"
#include "IGS_NetworkComponentAnimation.h"
#include "IGS_NetworkComponentCharacter.h"

APaybackPlayerCharacter::APaybackPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetworkCharacter = CreateDefaultSubobject<UIGS_NetworkComponentCharacter>(TEXT("NetworkComponentCharacter"));
    this->NetworkAnimation = CreateDefaultSubobject<UIGS_NetworkComponentAnimation>(TEXT("NetworkComponentAnimation"));
}


