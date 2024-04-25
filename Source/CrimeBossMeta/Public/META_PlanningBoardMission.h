#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_PlanningBoardMission.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlanningBoardMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FMETA_PlanningBoardMission();
};

