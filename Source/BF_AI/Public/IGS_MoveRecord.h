#pragma once
#include "CoreMinimal.h"
#include "IGS_MoveRecord.generated.h"

class AIGS_SquadFramework;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_MoveRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SquadFramework* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextAllowMoveTime;
    
    FIGS_MoveRecord();
};

