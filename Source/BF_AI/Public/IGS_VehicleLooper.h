#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_TrafficLoopfindingResult.h"
#include "IGS_VehicleLooper.generated.h"

class AIGS_TrafficSegment;
class AIGS_VehicleBase;

UCLASS(Blueprintable)
class BF_AI_API AIGS_VehicleLooper : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_TrafficSegment* InitialTrafficPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_VehicleSplineGroup ForVehicleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLoopLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLoopLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrefferedLoopLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TrafficLoopfindingResult PossibleLoops;
    
public:
    AIGS_VehicleLooper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLooping(AIGS_VehicleBase* Vehicle);
    
};

