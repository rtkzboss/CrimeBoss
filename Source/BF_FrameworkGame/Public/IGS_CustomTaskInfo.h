#pragma once
#include "CoreMinimal.h"
#include "EIGS_ObjectiveComponentType.h"
#include "IGS_CustomTaskInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_CustomTaskInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ObjectiveComponentType ObjectiveCompType;
    
    FIGS_CustomTaskInfo();
};

