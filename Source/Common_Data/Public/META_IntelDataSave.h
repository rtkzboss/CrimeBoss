#pragma once
#include "CoreMinimal.h"
#include "EMETA_RespectLvl.h"
#include "META_IntelDataSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_IntelDataSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfSoldeirsWereSentToIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredSoldiersForFullRevealIntel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_RespectLvl RespectValueOnMissionSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntelRewardMultiplier;
    
    FMETA_IntelDataSave();
};

