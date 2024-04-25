#include "IGS_BotOrderAction.h"

FIGS_BotOrderAction::FIGS_BotOrderAction() {
    this->Type = EIGS_BotCommandDefinition::Cancel;
    this->PathExists = false;
    this->Source = EIGS_BotOrderActionSource::Custom;
}

