#include "PaybackBackupHeisterCharacter.h"
#include "IGS_HeisterBackupObjectStatus.h"

APaybackBackupHeisterCharacter::APaybackBackupHeisterCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIGS_HeisterBackupObjectStatus>(TEXT("Object Status"))) {
    this->bIsValidForAimAssist = false;
}


