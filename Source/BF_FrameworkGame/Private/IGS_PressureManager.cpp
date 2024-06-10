#include "IGS_PressureManager.h"
#include "IGS_PressureManagerData.h"

UIGS_PressureManager::UIGS_PressureManager() {
    static ConstructorHelpers::FObjectFinder<UIGS_PressureManagerData> gen617(TEXT("/Game/00_Main/Core/GameModes/DA_PressureManagerData.DA_PressureManagerData"));
    (*this).m_PressureManagerData = gen617.Object;
}


