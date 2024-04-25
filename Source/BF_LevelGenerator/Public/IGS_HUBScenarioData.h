#pragma once
#include "CoreMinimal.h"
#include "EIGS_HubScenarioType.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_HUBScenarioData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_HUBScenarioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HubScenarioType ScenarioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BuildConfigurationTileable ScenarioDA;
    
    BF_LEVELGENERATOR_API FIGS_HUBScenarioData();
};

