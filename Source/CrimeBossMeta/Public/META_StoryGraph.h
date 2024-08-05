#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_RandEventCategory.h"
#include "META_BaseStoryGraph.h"
#include "META_StoryGraph.generated.h"

class AMETA_BaseGameMode;
class UMETA_BaseNode_SG;
class UStoryGraphManager;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_StoryGraph : public UMETA_BaseStoryGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_RandEventCategory Type;
    
    UMETA_StoryGraph();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStoryGraphManager* GetOwningManager();
    
    UFUNCTION(BlueprintCallable)
    UMETA_BaseNode_SG* GetNode(const int32 NodeId);
    
    UFUNCTION(BlueprintCallable)
    void EndGraph(AMETA_BaseGameMode* inGameMode, EMETA_GoalStatus inResultResult);
    
};

