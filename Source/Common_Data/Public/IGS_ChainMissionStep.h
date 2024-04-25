#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainAction.h"
#include "IGS_ChainMissionEntry.h"
#include "IGS_ChainMissionStep.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainMissionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ChainMissionEntry> PossibleMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ChainAction> PostMissionActions;
    
    FIGS_ChainMissionStep();
};

