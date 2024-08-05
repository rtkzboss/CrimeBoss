#include "ActivityGameInstanceSubsystem.h"

UActivityGameInstanceSubsystem::UActivityGameInstanceSubsystem() {
}

EActivityTask UActivityGameInstanceSubsystem::TileIdToActivityTask(FGameplayTag TileID) const {
    return EActivityTask::Campaign;
}

void UActivityGameInstanceSubsystem::TerminateAllActivityTasks() {
}

void UActivityGameInstanceSubsystem::StartLocalActivity(EActivityTask Task) {
}

void UActivityGameInstanceSubsystem::ResetIsActivityRequested() {
}

void UActivityGameInstanceSubsystem::ParseCityMapSaveData(const TMap<FGameplayTag, FMETA_TileSaveData>& inTilesSaveData) {
}

bool UActivityGameInstanceSubsystem::GetIsActivityRequested() const {
    return false;
}

void UActivityGameInstanceSubsystem::EndLocalActivity(EActivityTask Task, bool bSuccess) {
}


