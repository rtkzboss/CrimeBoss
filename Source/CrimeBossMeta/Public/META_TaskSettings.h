#pragma once
#include "CoreMinimal.h"
#include "META_TaskSettings.generated.h"

USTRUCT(BlueprintType)
struct FMETA_TaskSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeRemovedFromTaskListAfterExecution;
    
    CRIMEBOSSMETA_API FMETA_TaskSettings();
};

