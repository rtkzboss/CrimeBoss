#pragma once
#include "CoreMinimal.h"
#include "IGS_VehicleCar.h"
#include "IGS_PoliceVehicle.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_PoliceVehicle : public AIGS_VehicleCar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PoliceSirenAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* PoliceSirenAkRtpc;
    
public:
    AIGS_PoliceVehicle(const FObjectInitializer& ObjectInitializer);

};

