#pragma once
#include "CoreMinimal.h"
#include "EMETA_JobForceResult.h"
#include "META_BaseAction.h"
#include "META_ForceJobExecutionAction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_ForceJobExecutionAction : public UMETA_BaseAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_JobForceResult ForcedJobResultFromUI;
    
    UMETA_ForceJobExecutionAction();

};

