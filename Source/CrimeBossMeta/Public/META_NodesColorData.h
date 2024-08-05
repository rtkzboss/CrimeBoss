#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_NodeType.h"
#include "META_NodesColorData.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_NodesColorData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor STORY_ACTIVE_NODE_COLOR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_NodeType, FLinearColor> STORY_NODES_COLORS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_NodeType, FLinearColor> STORY_NODES_BODY_COLORS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMETA_GoalStatus, FLinearColor> END_NODE_COLOR_BY_RESULT;
    
public:
    UMETA_NodesColorData();

};

