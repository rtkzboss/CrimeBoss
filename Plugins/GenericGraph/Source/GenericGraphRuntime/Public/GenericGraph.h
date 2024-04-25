#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GenericGraph.generated.h"

class UGenericGraphEdge;
class UGenericGraphNode;

UCLASS(Abstract, Blueprintable)
class GENERICGRAPHRUNTIME_API UGenericGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 END_GRAPH_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 START_GRAPH_VALUE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericGraphNode> NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericGraphEdge> EdgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GraphTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraphNode* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UGenericGraphNode*> AllNodes;
    
    UGenericGraph();

    UFUNCTION(BlueprintCallable)
    void Print(bool ToConsole, bool ToScreen);
    
    UFUNCTION(BlueprintCallable)
    void GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelNum() const;
    
};

