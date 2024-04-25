#include "IGS_EditorSubsystemFunctionLibrary.h"

UIGS_EditorSubsystemFunctionLibrary::UIGS_EditorSubsystemFunctionLibrary() {
}

bool UIGS_EditorSubsystemFunctionLibrary::UseCustomMission() {
    return false;
}

FCustomMissionData UIGS_EditorSubsystemFunctionLibrary::GetCustomMission() {
    return FCustomMissionData{};
}


