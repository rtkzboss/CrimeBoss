#include "IGS_TimerTaskInfo.h"

FIGS_TimerTaskInfo::FIGS_TimerTaskInfo() {
    (*this).StartTimestamp = 0.000000000e+00f;
    (*this).Duration = 0.000000000e+00f;
    (*this).bPaused = false;
    (*TBaseStructure<FTimerHandle>::Get()->FindPropertyByName("Handle")->ContainerPtrToValuePtr<uint64>(&(*this).TimerTaskHandle, 0)) = 0;
}

