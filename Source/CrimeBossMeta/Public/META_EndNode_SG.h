#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_BaseNode_SG.h"
#include "META_EndNode_SG.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_EndNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalStatus Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldWaitUntilAllInnerGraphsBeFinished;
    
    UMETA_EndNode_SG();

};

