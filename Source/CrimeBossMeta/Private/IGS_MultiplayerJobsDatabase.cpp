#include "IGS_MultiplayerJobsDatabase.h"

UIGS_MultiplayerJobsDatabase::UIGS_MultiplayerJobsDatabase() {
}

FGameplayTagContainer UIGS_MultiplayerJobsDatabase::GetScenariosForJob(UObject* inWCO, const FGameplayTag inJobTag) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UIGS_MultiplayerJobsDatabase::GetRandomScenarioForQJLobby(UObject* inWCO) {
    return FGameplayTagContainer{};
}

FIGS_MultiplayerJobCategoryRow UIGS_MultiplayerJobsDatabase::GetMultiplayerJobCategory(UObject* inWCO, const FGameplayTag inMultiplayerJobCategoryID, bool& outSucceeded) {
    return FIGS_MultiplayerJobCategoryRow{};
}

TArray<FIGS_MultiplayerJobCategoryItemRow> UIGS_MultiplayerJobsDatabase::GetJobsInCategory(UObject* inWCO, FGameplayTag inCategoryTag) {
    return TArray<FIGS_MultiplayerJobCategoryItemRow>();
}

FIGS_MultiplayerJobCategoryItemRow UIGS_MultiplayerJobsDatabase::GetItemRow(UObject* inWCO, const FGameplayTag inItemRowID) {
    return FIGS_MultiplayerJobCategoryItemRow{};
}

TArray<FIGS_MultiplayerJobCategoryRow> UIGS_MultiplayerJobsDatabase::GetAllCategories(UObject* inWCO) {
    return TArray<FIGS_MultiplayerJobCategoryRow>();
}


