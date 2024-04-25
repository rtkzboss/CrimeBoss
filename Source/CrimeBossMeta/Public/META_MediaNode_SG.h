#pragma once
#include "CoreMinimal.h"
#include "EMETA_MediaNodeType.h"
#include "META_BaseNode_SG.h"
#include "META_MediaNode_SG.generated.h"

class UMETA_MediaCondition;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_MediaNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_MediaCondition* ExecutionBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpireTimerResultNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> ResultNodesMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_MediaNodeType MediaNodeType;
    
public:
    UMETA_MediaNode_SG();

    UFUNCTION(BlueprintCallable)
    int32 GetTargetNodeID(int32 inResult);
    
};

