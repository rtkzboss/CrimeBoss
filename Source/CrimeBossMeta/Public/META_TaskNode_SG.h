#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_TaskSettings.h"
#include "META_TaskNode_SG.generated.h"

class UMETA_TaskCondition;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TaskNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TaskSettings Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TaskSettings Fail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideTaskExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_TaskCondition* Task;
    
    UMETA_TaskNode_SG();

};

