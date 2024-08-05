#pragma once
#include "CoreMinimal.h"
#include "EIGS_AlarmReason.h"
#include "IGS_VehicleSpawner.h"
#include "IGS_PoliceVehicleSpawner.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_PoliceVehicleSpawner : public AIGS_VehicleSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnAfterAlarmed;
    
public:
    AIGS_PoliceVehicleSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAlarmed(EIGS_AlarmReason inReason);
    
};

