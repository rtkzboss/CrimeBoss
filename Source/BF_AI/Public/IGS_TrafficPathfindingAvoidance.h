#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_VehiclesRecord.h"
#include "IGS_TrafficPathfindingAvoidance.generated.h"

class UIGS_TrafficPathComponent;

UCLASS(Blueprintable)
class BF_AI_API UIGS_TrafficPathfindingAvoidance : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UIGS_TrafficPathComponent>, FIGS_VehiclesRecord> VehiclesOnPaths;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UIGS_TrafficPathComponent>> m_VisitedPathsTmp;
    
public:
    UIGS_TrafficPathfindingAvoidance();

};

