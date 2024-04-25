#include "IGS_StatisticsManagerBaseComponent.h"

UIGS_StatisticsManagerBaseComponent::UIGS_StatisticsManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_StatisticsManagerBaseComponent::ProvideStatisticForDay_Implementation(int32 inDay, FMETA_StatisticNoteSaveData& outStatistic) {
}

void UIGS_StatisticsManagerBaseComponent::ProvideStatisticForAnIntervalOfDay_Implementation(int32 inStartDay, int32 inEndDay, FMETA_StatisticNoteSaveData& outStatistic) {
}

void UIGS_StatisticsManagerBaseComponent::ProvideAllStatisticForCampaign_Implementation(FMETA_StatisticNoteSaveData& outStatistic) {
}


