#include "IGS_LevelGeneratorDevSettings.h"

UIGS_LevelGeneratorDevSettings::UIGS_LevelGeneratorDevSettings() {
    (*this).HubPresetsDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Maps/HubGenerator/Databases/DT_HUB_Presets.DT_HUB_Presets"), TEXT(""));
}


