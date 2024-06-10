#include "IGS_FrameworkGameDevSettings_Utilities.h"

UIGS_FrameworkGameDevSettings_Utilities::UIGS_FrameworkGameDevSettings_Utilities() {
    (*this).UnderWaterClearMaterial = nullptr;
    (*this).UnderWaterDeepBlueMaterial = nullptr;
    (*this).UnderWaterLakeMaterial = nullptr;
    (*this).UnderWaterLoopSound = nullptr;
    (*this).LevelBlockingBoundsSettings = FSoftObjectPath(TEXT("/Game/00_Main/Blueprints/Gameplay/Colliders/LevelBounds/DA_LevelBlockingBoundsSettings.DA_LevelBlockingBoundsSettings"), TEXT(""));
    (*this).WaveManagerData = FSoftObjectPath(TEXT("/Game/00_Main/Core/GameModes/DA_WaveManagerData.DA_WaveManagerData"), TEXT(""));
    (*this).PressureManagerData = FSoftObjectPath(TEXT("/Game/00_Main/Core/GameModes/DA_PressureManagerData.DA_PressureManagerData"), TEXT(""));
    (*this).WeatherMPC = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Enviro/Weather/MPC_Weather.MPC_Weather"), TEXT(""));
}


