#include "IGS_AICommand.h"

UIGS_AICommand::UIGS_AICommand() {
    this->State = EIGS_AICommandState::AICS_Unknown;
    this->Type = EIGS_AICommandType::AICT_Unknown;
}

void UIGS_AICommand::Finish() {
}

void UIGS_AICommand::Fail() {
}


