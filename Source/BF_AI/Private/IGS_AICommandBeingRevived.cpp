#include "IGS_AICommandBeingRevived.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandBeingRevived::UIGS_AICommandBeingRevived() {
    this->Type = EIGS_AICommandType::AICT_BeingRevived;
    this->RevivedByCharacter = NULL;
}


