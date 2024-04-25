#pragma once
#include "CoreMinimal.h"
#include "GenericGraphNode_SearchData.generated.h"

class UGenericGraphNode;

USTRUCT(BlueprintType)
struct FGenericGraphNode_SearchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraphNode* Node;
    
    GENERICGRAPHRUNTIME_API FGenericGraphNode_SearchData();
};

