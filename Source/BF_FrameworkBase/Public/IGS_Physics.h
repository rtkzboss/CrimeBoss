#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "IGS_Physics.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_Physics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_Physics();

    UFUNCTION(BlueprintCallable)
    static FPredictProjectilePathPointData PredictTargetLocation(const AActor* Target, float Radius, float After);
    
    UFUNCTION(BlueprintCallable)
    static float GetGravityZ(const UObject* WCO);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBallisticVelocity(const UObject* WCO, const FVector& PositionStart, const FVector& PositionEnd, float Speed);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBallisticPositionInTime(const UObject* WCO, const FVector& PositionStart, const FVector& PositionEnd, float Speed, float NormalizedPosition);
    
    UFUNCTION(BlueprintCallable)
    static float GetBallisticDuration(const FVector& PositionStart, const FVector& PositionEnd, float Speed);
    
};

