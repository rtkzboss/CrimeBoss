#include "DFLDebugFL.h"

UDFLDebugFL::UDFLDebugFL() {
}

void UDFLDebugFL::SetDebugPropertiesPrintDebug(const UBlueprint* Blueprint, bool bNewPrintDebug) {
}

void UDFLDebugFL::SetDebugPropertiesLogDebug(const UBlueprint* Blueprint, bool bNewLogDebug) {
}

void UDFLDebugFL::SetDebugPropertiesDrawDebug(const UBlueprint* Blueprint, bool bNewDrawDebug) {
}

void UDFLDebugFL::SetDebugPropertiesDebug(const UBlueprint* Blueprint, bool bNewDebug) {
}

void UDFLDebugFL::SetDebugPropertiesBoolByName(const UBlueprint* Blueprint, const FString& Name, bool bNewValue) {
}

FColor UDFLDebugFL::GetTertiaryColour_FColor(UObject* Owner) {
    return FColor{};
}

FLinearColor UDFLDebugFL::GetTertiaryColour(UObject* Owner) {
    return FLinearColor{};
}

float UDFLDebugFL::GetSize(UObject* Owner) {
    return 0.0f;
}

int32 UDFLDebugFL::GetSegments(UObject* Owner) {
    return 0;
}

FColor UDFLDebugFL::GetSecondaryColour_FColor(UObject* Owner) {
    return FColor{};
}

FLinearColor UDFLDebugFL::GetSecondaryColour(UObject* Owner) {
    return FLinearColor{};
}

float UDFLDebugFL::GetScale(UObject* Owner) {
    return 0.0f;
}

float UDFLDebugFL::GetRadius(UObject* Owner) {
    return 0.0f;
}

FLinearColor UDFLDebugFL::GetPrintWarningColour(UObject* Owner) {
    return FLinearColor{};
}

bool UDFLDebugFL::GetPrintFunction(UObject* Owner) {
    return false;
}

FLinearColor UDFLDebugFL::GetPrintErrorColour(UObject* Owner) {
    return FLinearColor{};
}

float UDFLDebugFL::GetPrintDuration(UObject* Owner) {
    return 0.0f;
}

bool UDFLDebugFL::GetPrintDebug(UObject* Owner) {
    return false;
}

FLinearColor UDFLDebugFL::GetPrintColour(UObject* Owner) {
    return FLinearColor{};
}

bool UDFLDebugFL::GetPrintClass(UObject* Owner) {
    return false;
}

FColor UDFLDebugFL::GetPrimaryColour_FColor(UObject* Owner) {
    return FColor{};
}

FLinearColor UDFLDebugFL::GetPrimaryColour(UObject* Owner) {
    return FLinearColor{};
}

bool UDFLDebugFL::GetLogFunction(UObject* Owner) {
    return false;
}

bool UDFLDebugFL::GetLogDebug(UObject* Owner) {
    return false;
}

bool UDFLDebugFL::GetLogClass(UObject* Owner) {
    return false;
}

float UDFLDebugFL::GetLineThickness(UObject* Owner) {
    return 0.0f;
}

float UDFLDebugFL::GetLineLength(UObject* Owner) {
    return 0.0f;
}

float UDFLDebugFL::GetHalfHeight(UObject* Owner) {
    return 0.0f;
}

float UDFLDebugFL::GetDrawDuration(UObject* Owner) {
    return 0.0f;
}

TEnumAsByte<EDrawDebugTrace::Type> UDFLDebugFL::GetDrawDebugTrace(UObject* Owner) {
    return EDrawDebugTrace::None;
}

bool UDFLDebugFL::GetDrawDebug(UObject* Owner) {
    return false;
}

FVector UDFLDebugFL::GetDirectionFromAxis(EDFLDrawDebugAxis Axis) {
    return FVector{};
}

bool UDFLDebugFL::GetDebugPropertiesPrintDebug(const UBlueprint* Blueprint) {
    return false;
}

bool UDFLDebugFL::GetDebugPropertiesLogDebug(const UBlueprint* Blueprint) {
    return false;
}

bool UDFLDebugFL::GetDebugPropertiesDrawDebug(const UBlueprint* Blueprint) {
    return false;
}

bool UDFLDebugFL::GetDebugPropertiesDebug(const UBlueprint* Blueprint) {
    return false;
}

bool UDFLDebugFL::GetDebugPropertiesBoolByName(const UBlueprint* Blueprint, const FString& Name) {
    return false;
}

bool UDFLDebugFL::GetDebugProperties(UObject* Owner, FDFLDebugProperties& ActorDebugProperties) {
    return false;
}

FLinearColor UDFLDebugFL::GetDebugColour(UObject* Owner, EDFLDrawDebugColour DebugColour) {
    return FLinearColor{};
}

FColor UDFLDebugFL::GetDebug_FColour(UObject* Owner, EDFLDrawDebugColour DebugColour) {
    return FColor{};
}

float UDFLDebugFL::GetArrowSize(UObject* Owner) {
    return 0.0f;
}

void UDFLDebugFL::DFLPrintWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLPrintMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLPrintLogWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLPrintLogMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLPrintLogError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLPrintError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLLogWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLLogMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLLogError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction) {
}

void UDFLDebugFL::DFLDrawDebugStraightLineOverrideDuration(UObject* Owner, const FVector Location, float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugStraightLineOverride(UObject* Owner, const FVector Location, FLinearColor Colour, float Duration, float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugStraightLine(UObject* Owner, const FVector Location, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugSphereOverrideDuration(UObject* Owner, const FVector Location, float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugSphereOverride(UObject* Owner, const FVector Location, float Radius, int32 Segments, FLinearColor LineColour, float Duration, float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugSphere(UObject* Owner, const FVector Location, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugPointOverrideDuration(UObject* Owner, const FVector Location, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugPointOverride(UObject* Owner, const FVector Location, const float Size, const FLinearColor Colour, const float Duration) {
}

void UDFLDebugFL::DFLDrawDebugPoint(UObject* Owner, const FVector Location, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugPlaneOverrideDuration(UObject* Owner, const FVector Location, const FVector Normal, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugPlaneOverride(UObject* Owner, const FVector Location, const FVector Normal, const float Size, const FLinearColor Colour, const float Duration) {
}

void UDFLDebugFL::DFLDrawDebugPlane(UObject* Owner, const FVector Location, const FVector Normal, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugLineOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugLineOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, FLinearColor Colour, float Duration, float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugLineDirectionOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector Direction, float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugLineDirectionOverride(UObject* Owner, const FVector StartLocation, const FVector Direction, const float LineLength, FLinearColor Colour, float Duration, float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugLineDirection(UObject* Owner, const FVector StartLocation, const FVector Direction, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugLine(UObject* Owner, const FVector StartLocation, const FVector EndLocation, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugFrustrumOverrideDuration(UObject* Owner, const FTransform FrustrumTransform, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugFrustrumOverride(UObject* Owner, const FTransform FrustrumTransform, const FLinearColor Colour, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugFrustrum(UObject* Owner, const FTransform FrustrumTransform, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCylinderOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCylinderOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Radius, const int32 Segments, const FLinearColor Colour, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugCylinder(UObject* Owner, const FVector StartLocation, const FVector EndLocation, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugConeOverrideDuration(UObject* Owner, const FVector Location, const FVector Direction, const float AngleWidth, const float AngleHeight, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugConeOverride(UObject* Owner, const FVector Location, const FVector Direction, const float Length, const float AngleWidth, const float AngleHeight, const int32 NumSides, const FLinearColor Colour, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugCone(UObject* Owner, const FVector Location, const FVector Direction, const float AngleWidth, const float AngleHeight, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCircleOverrideDuration(UObject* Owner, const FVector Center, const FVector YAxis, const FVector ZAxis, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCircleOverride(UObject* Owner, const FVector Center, const float Radius, const int32 Segments, FLinearColor Colour, const float Duration, const float Thickness, const FVector YAxis, const FVector ZAxis, const bool bDrawAxis) {
}

void UDFLDebugFL::DFLDrawDebugCircle(UObject* Owner, const FVector Center, const FVector YAxis, const FVector ZAxis, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCapsuleOverrideDuration(UObject* Owner, const FVector Center, FRotator Rotation, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCapsuleOverride(UObject* Owner, const FVector Center, const float HalfHeight, const float Radius, FRotator Rotation, const FLinearColor Colour, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugCapsule(UObject* Owner, const FVector Center, FRotator Rotation, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCameraOverrideDuration(UObject* Owner, const UCameraComponent* Camera, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugCameraOverride(UObject* Owner, const UCameraComponent* Camera, const float Scale, const FLinearColor Colour, const float Duration) {
}

void UDFLDebugFL::DFLDrawDebugCamera(UObject* Owner, const UCameraComponent* Camera, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugBoxOverrideDuration(UObject* Owner, const FVector Location, const FVector Extent, const FRotator Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugBoxOverride(UObject* Owner, const FVector Location, const FVector Extent, const FLinearColor Colour, const FRotator Rotation, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugBox(UObject* Owner, const FVector Location, const FVector Extent, const FRotator Rotation, EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugArrowOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Duration, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugArrowOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float ArrowSize, const FLinearColor Colour, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugArrow(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const EDFLDrawDebugColour DrawDebugColour) {
}

void UDFLDebugFL::DFLDrawDebugActorOverrideDuration(UObject* Owner, AActor* Actor, const float Duration) {
}

void UDFLDebugFL::DFLDrawDebugActorOverride(UObject* Owner, AActor* Actor, const float Scale, const float Duration, const float Thickness) {
}

void UDFLDebugFL::DFLDrawDebugActor(UObject* Owner, AActor* Actor) {
}

bool UDFLDebugFL::BlueprintHasDebugProperties(const UBlueprint* Blueprint) {
    return false;
}


