#include "IGS_Vectors.h"

UIGS_Vectors::UIGS_Vectors() {
}

EVectorSideEnum UIGS_Vectors::GetVector2SideFromVector1Step90(const FVector& Vector1, const FVector& Vector2) {
    return EVectorSideEnum::VS_Forward;
}

EVectorSideEnum UIGS_Vectors::GetVector2SideFromVector1Step45(const FVector& Vector1, const FVector& Vector2, float& OutDelta) {
    return EVectorSideEnum::VS_Forward;
}

EVectorSideEnum UIGS_Vectors::GetVector2SideFromVector1Step180(const FVector& Vector1, const FVector& Vector2) {
    return EVectorSideEnum::VS_Forward;
}

bool UIGS_Vectors::GetTargetPositionBasedOnVelocity(AActor* TargetActor, const FVector& PursuerPosition, const FVector2D& MultiplierFR, FVector& Result) {
    return false;
}

float UIGS_Vectors::GetAngleBetweenVectorsRad(const FVector& Vector1, const FVector& Vector2) {
    return 0.0f;
}

float UIGS_Vectors::GetAngleBetweenVectorsDeg(const FVector& Vector1, const FVector& Vector2) {
    return 0.0f;
}


