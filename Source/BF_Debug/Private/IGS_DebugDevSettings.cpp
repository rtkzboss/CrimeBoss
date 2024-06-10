#include "IGS_DebugDevSettings.h"

UIGS_DebugDevSettings::UIGS_DebugDevSettings() {
    (*this).DamageSubsystemBlueprint = FSoftObjectPath(TEXT("/Game/00_Main/Core/Debug/BP_DebugSubsystemBlueprint.BP_DebugSubsystemBlueprint_C"), TEXT(""));
}


