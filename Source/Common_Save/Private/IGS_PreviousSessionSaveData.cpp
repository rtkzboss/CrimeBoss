#include "IGS_PreviousSessionSaveData.h"

FIGS_PreviousSessionSaveData::FIGS_PreviousSessionSaveData() {
    (*this).SessionId = TEXT("");
    (*this).MissionID.A = 0;
    (*this).MissionID.B = 0;
    (*this).MissionID.C = 0;
    (*this).MissionID.D = 0;
}

