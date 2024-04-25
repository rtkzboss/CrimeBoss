#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGraphNode.generated.h"

class UGenericGraph;
class UGenericGraphEdge;
class UGenericGraphNode;

UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UGenericGraphNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraph* Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericGraphNode*> ParentNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericGraphNode*> ChildrenNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UGenericGraphNode*, UGenericGraphEdge*> Edges;
    
    UGenericGraphNode();

    UFUNCTION(BlueprintCallable)
    void RefreshValuesOnSaveGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeafNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGenericGraph* GetGraph() const;
    
    UFUNCTION(BlueprintCallable)
    UGenericGraphEdge* GetEdge(UGenericGraphNode* ChildNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDescription() const;
    
};

