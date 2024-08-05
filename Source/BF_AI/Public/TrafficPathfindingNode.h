#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrafficPathfindingNode.generated.h"

class AIGS_VehicleDestinationPointFramework;
class AIGS_VehicleExitPointFramework;
class AIGS_VehicleSpawnerFramework;
class UIGS_TrafficPathComponent;
class UTrafficPathfindingEdge;

UCLASS(Blueprintable)
class BF_AI_API UTrafficPathfindingNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingEdge*> EdgesOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingEdge*> EdgesIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingEdge*> EdgesOutReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrafficPathfindingEdge*> EdgesInReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TrafficPathComponent* Segment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleDestinationPointFramework*> DestinationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleExitPointFramework*> ExitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_VehicleSpawnerFramework*> VehicleSpawners;
    
public:
    UTrafficPathfindingNode();

};

