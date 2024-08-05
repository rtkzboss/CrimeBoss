#pragma once
#include "CoreMinimal.h"
#include "META_StatisticNoteSaveData.h"
#include "Components/ActorComponent.h"
#include "IGS_StatisticsManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_StatisticsManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_StatisticsManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideStatisticForDay(int32 inDay, FMETA_StatisticNoteSaveData& outStatistic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideStatisticForAnIntervalOfDay(int32 inStartDay, int32 inEndDay, FMETA_StatisticNoteSaveData& outStatistic);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideAllStatisticForCampaign(FMETA_StatisticNoteSaveData& outStatistic);
    
};

