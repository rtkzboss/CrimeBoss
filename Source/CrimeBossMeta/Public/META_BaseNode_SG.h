#pragma once
#include "CoreMinimal.h"
#include "GenericGraphNode.h"
#include "EMETA_NodeType.h"
#include "META_GraphNode.h"
#include "META_BaseNode_SG.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API UMETA_BaseNode_SG : public UGenericGraphNode, public IMETA_GraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_NodeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeResetted;
    
    UMETA_BaseNode_SG();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetNodeToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ExecuteNode(AMETA_BaseGameMode* inGameMode);
    

    // Fix for true pure virtual functions not being implemented
};

