#include "IGS_Physics.h"

UIGS_Physics::UIGS_Physics() {
}

FPredictProjectilePathPointData UIGS_Physics::PredictTargetLocation(const AActor* Target, float Radius, float After) {
    return FPredictProjectilePathPointData{};
}

float UIGS_Physics::GetGravityZ(const UObject* WCO) {
    return 0.0f;
}

FVector UIGS_Physics::GetBallisticVelocity(const UObject* WCO, const FVector& PositionStart, const FVector& PositionEnd, float Speed) {
    return FVector{};
}

FVector UIGS_Physics::GetBallisticPositionInTime(const UObject* WCO, const FVector& PositionStart, const FVector& PositionEnd, float Speed, float NormalizedPosition) {
    return FVector{};
}

float UIGS_Physics::GetBallisticDuration(const FVector& PositionStart, const FVector& PositionEnd, float Speed) {
    return 0.0f;
}


