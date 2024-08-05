#include "IGS_BotOrderAction.h"

FIGS_BotOrderAction::FIGS_BotOrderAction() {
    (*this).Type = EIGS_BotCommandDefinition::Unknown;
    (*this).Instigator = nullptr;
    (*this).Bot = nullptr;
    (*this).Object = nullptr;
    (*this).Location.X = 3.402823466e+38f;
    (*this).Location.Y = 3.402823466e+38f;
    (*this).Location.Z = 3.402823466e+38f;
    (*this).PathExists = false;
    (*this).AdditionalPoi.Empty();
    (*this).Source = EIGS_BotOrderActionSource::Custom;
}

