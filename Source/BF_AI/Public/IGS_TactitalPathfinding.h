#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_TactitalPathfinding.generated.h"

class UTacticalPathfindingFilterBase;
class UTacticalPathfindingNode;
class UTacticalPathfindingNodeRoom;

UCLASS(Blueprintable)
class BF_AI_API UIGS_TactitalPathfinding : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTacticalPathfindingNode*> m_Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTacticalPathfindingNodeRoom*> m_RoomNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTacticalPathfindingNode*> m_TmpPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UTacticalPathfindingFilterBase*> m_FiltersCache;
    
public:
    UIGS_TactitalPathfinding();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPopulationFinished();
    
};

