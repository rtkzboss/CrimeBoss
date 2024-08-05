#include "IGS_RenderingDevSettings.h"

UIGS_RenderingDevSettings::UIGS_RenderingDevSettings() {
    (*this).GlobalPostProcessesDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/PostProcess/VisualStyle/Global/DA_GloballyAppliedPostProcesses.DA_GloballyAppliedPostProcesses"), TEXT(""));
}


