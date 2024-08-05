#pragma once
#include "CoreMinimal.h"
#include "META_RandEventGangCondition.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_RandEventGangCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticGangSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsideringTimeInDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OccupiedTerritoriesOfOtherGang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OccupiedTerritoriesOfPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LostOwnTerritoriesByOtherGang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LostOwnTerritoriesByPlayer;
    
    FMETA_RandEventGangCondition();
};

