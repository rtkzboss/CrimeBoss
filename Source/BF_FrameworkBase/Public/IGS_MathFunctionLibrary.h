#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_SpeedUnit.h"
#include "IGS_MathFunctionLibrary.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_MathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_MathFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorRadiansToDegrees(FVector inRadVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorDegreesToRadians(FVector inDegVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SphereBoxIntersection(FVector inSphereOrigin, float InSphereRadius, FVector inBoxOrigin, FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SignedDistancePlanePoint(FVector inPlaneNormal, FVector inPlanePoint, FVector inPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SetVectorLength(FVector InValue, float InSize);
    
    UFUNCTION(BlueprintCallable)
    static void SetCenterOfMassOffset(UPrimitiveComponent* inTarget, FVector inOffset, FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToUpperMultiple(int32 InValue, int32 inMultiple, bool inSkipSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToNearestMultiple(int32 InValue, int32 inMultiple);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RoundToLowerMultiple(int32 InValue, int32 inMultiple, bool inSkipSelf);
    
    UFUNCTION(BlueprintCallable)
    static FVector RotateVectorAroundPivot(FVector inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg);
    
    UFUNCTION(BlueprintCallable)
    static void RotateAroundPivotSweep(UPrimitiveComponent* inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg, bool inSweep, FHitResult& outHitResult, ETeleportType InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void RotateAroundPivot(UPrimitiveComponent* inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointOnLine(FVector inLineOrigin, FVector inLineDirection, FVector inPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 PointOnWhichSideOfLineSegment(FVector inLinePoint1, FVector inLinePoint2, FVector inPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D NegateVector2D(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NegateInt(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float NegateFloat(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineToLineIntersection(FVector& outIntersectionPoint, FVector inLinePoint1, FVector inLineDir1, FVector inLinePoint2, FVector inLineDir2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LineExtentBoxIntersection(FBox InBox, FVector inStart, FVector inEnd, FVector inExtent, FVector& outHitLocation, FVector& outHitNormal, float& outHitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPowerOfTwo(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointRightOfLine(FVector inLinePoint1, FVector inLinePoint2, FVector inPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInsideBox(FVector inPoint, FVector inBoxOrigin, FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPointInDistanceFromVector(FVector vectorStart, FVector vectorDirection, FVector inPoint, float Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMultipleOf(int32 InValue, int32 inMultiple);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLineInsideSphere(FVector inLineStart, FVector inLineDir, float inLineLength, FVector inSphereOrigin, float InSphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEvenNumber(float InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GridSnap(FVector InValue, float inGrid);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVelocityAtPoint(UPrimitiveComponent* inTarget, FVector inPoint, FName InBoneName, bool inDrawDebugInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertPhysicsLinearVelocity(FVector inVelocity, EIGS_SpeedUnit inSpeedUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClosestPointsOnTwoLines(FVector& outClosestPointLine1, FVector& outClosestPointLine2, FVector inLinePoint1, FVector inLineVec1, FVector inLinePoint2, FVector inLineVec2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ClosestPointsOfLineSegments(FVector inLine1Start, FVector inLine1End, FVector inLine2Start, FVector inLine2End, FVector& outLinePoint1, FVector& outLinePoint2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnSphereToLine(FVector inSphereOrigin, float InSphereRadius, FVector inLineOrigin, FVector inLineDir);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnLineSegment(FVector inPoint, FVector inLineStart, FVector inLineEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreLineSegmentsCrossing(FVector inPointA1, FVector inPointA2, FVector inPointB1, FVector inPointB2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 AddInt32Safe(const int32 inA, const int32 inB, const int32 inMax);
    
};

