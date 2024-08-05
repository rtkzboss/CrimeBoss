#include "IGS_WaveManagerWatcher.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_WaveManagerWatcher::AIGS_WaveManagerWatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StartOnAlarm = true;
    (*this).TimeAfterAlarm = 3.000000000e+01f;
    (*this).CurrentPhase = EIGS_PressurePhase::PP_Unknown;
}


