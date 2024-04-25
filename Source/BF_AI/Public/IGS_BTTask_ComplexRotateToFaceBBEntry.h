#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#include "IGS_BTTask_ComplexRotateToFaceBBEntry.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_ComplexRotateToFaceBBEntry : public UBTTask_RotateToFaceBBEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceRotationByAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PredictActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTimePerMeter;
    
    UIGS_BTTask_ComplexRotateToFaceBBEntry();

};

