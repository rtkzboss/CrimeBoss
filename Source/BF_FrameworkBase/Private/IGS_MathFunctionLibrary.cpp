#include "IGS_MathFunctionLibrary.h"

UIGS_MathFunctionLibrary::UIGS_MathFunctionLibrary() {
}

FVector UIGS_MathFunctionLibrary::VectorRadiansToDegrees(FVector inRadVector) {
    return FVector{};
}

FVector UIGS_MathFunctionLibrary::VectorDegreesToRadians(FVector inDegVector) {
    return FVector{};
}

bool UIGS_MathFunctionLibrary::SphereBoxIntersection(FVector inSphereOrigin, float InSphereRadius, FVector inBoxOrigin, FVector InBoxExtent) {
    return false;
}

float UIGS_MathFunctionLibrary::SignedDistancePlanePoint(FVector inPlaneNormal, FVector inPlanePoint, FVector inPoint) {
    return 0.0f;
}

FVector UIGS_MathFunctionLibrary::SetVectorLength(FVector InValue, float InSize) {
    return FVector{};
}

void UIGS_MathFunctionLibrary::SetCenterOfMassOffset(UPrimitiveComponent* inTarget, FVector inOffset, FName InBoneName) {
}

int32 UIGS_MathFunctionLibrary::RoundToUpperMultiple(int32 InValue, int32 inMultiple, bool inSkipSelf) {
    return 0;
}

int32 UIGS_MathFunctionLibrary::RoundToNearestMultiple(int32 InValue, int32 inMultiple) {
    return 0;
}

int32 UIGS_MathFunctionLibrary::RoundToLowerMultiple(int32 InValue, int32 inMultiple, bool inSkipSelf) {
    return 0;
}

FVector UIGS_MathFunctionLibrary::RotateVectorAroundPivot(FVector inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg) {
    return FVector{};
}

void UIGS_MathFunctionLibrary::RotateAroundPivotSweep(UPrimitiveComponent* inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg, bool inSweep, FHitResult& outHitResult, ETeleportType InTeleportType) {
}

void UIGS_MathFunctionLibrary::RotateAroundPivot(UPrimitiveComponent* inTarget, FVector inPivot, FVector inRotateAxis, float inRotateDeg) {
}

FVector UIGS_MathFunctionLibrary::ProjectPointOnLine(FVector inLineOrigin, FVector inLineDirection, FVector inPoint) {
    return FVector{};
}

int32 UIGS_MathFunctionLibrary::PointOnWhichSideOfLineSegment(FVector inLinePoint1, FVector inLinePoint2, FVector inPoint) {
    return 0;
}

FVector2D UIGS_MathFunctionLibrary::NegateVector2D(FVector2D InValue) {
    return FVector2D{};
}

int32 UIGS_MathFunctionLibrary::NegateInt(int32 InValue) {
    return 0;
}

float UIGS_MathFunctionLibrary::NegateFloat(float InValue) {
    return 0.0f;
}

bool UIGS_MathFunctionLibrary::LineToLineIntersection(FVector& outIntersectionPoint, FVector inLinePoint1, FVector inLineDir1, FVector inLinePoint2, FVector inLineDir2) {
    return false;
}

bool UIGS_MathFunctionLibrary::LineExtentBoxIntersection(FBox InBox, FVector inStart, FVector inEnd, FVector inExtent, FVector& outHitLocation, FVector& outHitNormal, float& outHitTime) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsPowerOfTwo(int32 InValue) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsPointRightOfLine(FVector inLinePoint1, FVector inLinePoint2, FVector inPoint) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsPointInsideBox(FVector inPoint, FVector inBoxOrigin, FVector InBoxExtent) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsPointInDistanceFromVector(FVector vectorStart, FVector vectorDirection, FVector inPoint, float Threshold) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsMultipleOf(int32 InValue, int32 inMultiple) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsLineInsideSphere(FVector inLineStart, FVector inLineDir, float inLineLength, FVector inSphereOrigin, float InSphereRadius) {
    return false;
}

bool UIGS_MathFunctionLibrary::IsEvenNumber(float InValue) {
    return false;
}

FVector UIGS_MathFunctionLibrary::GridSnap(FVector InValue, float inGrid) {
    return FVector{};
}

FVector UIGS_MathFunctionLibrary::GetVelocityAtPoint(UPrimitiveComponent* inTarget, FVector inPoint, FName InBoneName, bool inDrawDebugInfo) {
    return FVector{};
}

float UIGS_MathFunctionLibrary::ConvertPhysicsLinearVelocity(FVector inVelocity, EIGS_SpeedUnit inSpeedUnit) {
    return 0.0f;
}

bool UIGS_MathFunctionLibrary::ClosestPointsOnTwoLines(FVector& outClosestPointLine1, FVector& outClosestPointLine2, FVector inLinePoint1, FVector inLineVec1, FVector inLinePoint2, FVector inLineVec2) {
    return false;
}

void UIGS_MathFunctionLibrary::ClosestPointsOfLineSegments(FVector inLine1Start, FVector inLine1End, FVector inLine2Start, FVector inLine2End, FVector& outLinePoint1, FVector& outLinePoint2) {
}

FVector UIGS_MathFunctionLibrary::ClosestPointOnSphereToLine(FVector inSphereOrigin, float InSphereRadius, FVector inLineOrigin, FVector inLineDir) {
    return FVector{};
}

FVector UIGS_MathFunctionLibrary::ClosestPointOnLineSegment(FVector inPoint, FVector inLineStart, FVector inLineEnd) {
    return FVector{};
}

bool UIGS_MathFunctionLibrary::AreLineSegmentsCrossing(FVector inPointA1, FVector inPointA2, FVector inPointB1, FVector inPointB2) {
    return false;
}

int32 UIGS_MathFunctionLibrary::AddInt32Safe(const int32 inA, const int32 inB, const int32 inMax) {
    return 0;
}


