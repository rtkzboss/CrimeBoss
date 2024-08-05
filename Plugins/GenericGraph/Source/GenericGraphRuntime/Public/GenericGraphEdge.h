#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGraphEdge.generated.h"

class UGenericGraph;
class UGenericGraphNode;

UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UGenericGraphEdge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraph* Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraphNode* StartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraphNode* EndNode;
    
    UGenericGraphEdge();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGenericGraph* GetGraph() const;
    
};

