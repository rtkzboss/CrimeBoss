#include "IGS_AICommandUseObject.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandUseObject::UIGS_AICommandUseObject() {
    this->Type = EIGS_AICommandType::AICT_UseObject;
    this->ObjectToUse = NULL;
}


