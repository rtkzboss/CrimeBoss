#include "IGS_CustomGameUserSettings.h"
#include "IGS_ControllerSettings.h"
#include "IGS_GameSettings.h"
#include "IGS_InputBindSettings.h"
#include "IGS_MouseSettings.h"
#include "IGS_RenderingSettings.h"
#include "IGS_SoundSettings.h"
#include "IGS_TogglesSettings.h"

UIGS_CustomGameUserSettings::UIGS_CustomGameUserSettings() {
    (*this).SoundSettings = CreateDefaultSubobject<UIGS_SoundSettings>(TEXT("SoundSettings"));
    (*this).GameSettings = CreateDefaultSubobject<UIGS_GameSettings>(TEXT("GameSettings"));
    (*this).RenderingSettings = CreateDefaultSubobject<UIGS_RenderingSettings>(TEXT("RenderingSettings"));
    (*this).ControllerSettings = CreateDefaultSubobject<UIGS_ControllerSettings>(TEXT("ControllerSettings"));
    (*this).TogglesSettings = CreateDefaultSubobject<UIGS_TogglesSettings>(TEXT("TogglesSettings"));
    (*this).MouseSettings = CreateDefaultSubobject<UIGS_MouseSettings>(TEXT("MouseSettings"));
    (*this).InputBindSettings = CreateDefaultSubobject<UIGS_InputBindSettings>(TEXT("InputBindSettings"));
    (*this).ResolutionSizeX = 2560;
    (*this).ResolutionSizeY = 1440;
    (*this).LastUserConfirmedResolutionSizeX = 1920;
    (*this).LastUserConfirmedResolutionSizeY = 1080;
    (*this).LastConfirmedFullscreenMode = 2;
    (*this).Version = 5;
    (*this).LastCPUBenchmarkResult = 2.903607178e+02f;
    (*this).LastGPUBenchmarkResult = 1.337404175e+03f;
    auto& gen0 = (*this).LastCPUBenchmarkSteps;
    gen0.Empty();
    gen0.AddDefaulted(2);
    auto& gen1 = (*this).LastGPUBenchmarkSteps;
    gen1.Empty();
    gen1.AddDefaulted(7);
}

UIGS_CustomGameUserSettings* UIGS_CustomGameUserSettings::Instance() {
    return NULL;
}


