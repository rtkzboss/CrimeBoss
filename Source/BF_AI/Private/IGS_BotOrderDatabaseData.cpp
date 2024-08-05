#include "IGS_BotOrderDatabaseData.h"

FIGS_BotOrderDatabaseData::FIGS_BotOrderDatabaseData() {
    (*this).MaxBotCount = 1;
    (*this).PathMustExist = true;
    (*this).Stacks = false;
    (*this).CancelOnObject = true;
}

