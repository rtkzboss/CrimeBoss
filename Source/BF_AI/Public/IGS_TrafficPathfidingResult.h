#pragma once
#include "CoreMinimal.h"
#include "IGS_TrafficPathfidingResult.generated.h"

class AIGS_VehicleSpawnerFramework;
class UIGS_TrafficPathComponent;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_TrafficPathfidingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_VehicleSpawnerFramework* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_TrafficPathComponent*> Path;
    
    FIGS_TrafficPathfidingResult();
};

