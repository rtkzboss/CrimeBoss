#include "IGS_WaveManagerEventNotificationData.h"

FIGS_WaveManagerEventNotificationData::FIGS_WaveManagerEventNotificationData() {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).ControlTactic = EIGS_StormTacticType::STT_None;
}

