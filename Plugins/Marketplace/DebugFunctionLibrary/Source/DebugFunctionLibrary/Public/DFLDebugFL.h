#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DFLDebugProperties.h"
#include "EDFLDrawDebugAxis.h"
#include "EDFLDrawDebugColour.h"
#include "DFLDebugFL.generated.h"

class AActor;
class UBlueprint;
class UCameraComponent;
class UObject;

UCLASS(Blueprintable)
class DEBUGFUNCTIONLIBRARY_API UDFLDebugFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDFLDebugFL();

    UFUNCTION(BlueprintCallable)
    static void SetDebugPropertiesPrintDebug(const UBlueprint* Blueprint, bool bNewPrintDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugPropertiesLogDebug(const UBlueprint* Blueprint, bool bNewLogDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugPropertiesDrawDebug(const UBlueprint* Blueprint, bool bNewDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugPropertiesDebug(const UBlueprint* Blueprint, bool bNewDebug);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugPropertiesBoolByName(const UBlueprint* Blueprint, const FString& Name, bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetTertiaryColour_FColor(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetTertiaryColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSize(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSegments(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetSecondaryColour_FColor(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetSecondaryColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetScale(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRadius(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetPrintWarningColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPrintFunction(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetPrintErrorColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPrintDuration(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPrintDebug(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetPrintColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPrintClass(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetPrimaryColour_FColor(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetPrimaryColour(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLogFunction(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLogDebug(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLogClass(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLineThickness(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLineLength(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHalfHeight(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDrawDuration(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EDrawDebugTrace::Type> GetDrawDebugTrace(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDrawDebug(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDirectionFromAxis(EDFLDrawDebugAxis Axis);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugPropertiesPrintDebug(const UBlueprint* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugPropertiesLogDebug(const UBlueprint* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugPropertiesDrawDebug(const UBlueprint* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugPropertiesDebug(const UBlueprint* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDebugPropertiesBoolByName(const UBlueprint* Blueprint, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugProperties(UObject* Owner, FDFLDebugProperties& ActorDebugProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetDebugColour(UObject* Owner, EDFLDrawDebugColour DebugColour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetDebug_FColour(UObject* Owner, EDFLDrawDebugColour DebugColour);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArrowSize(UObject* Owner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintLogWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintLogMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintLogError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLPrintError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLLogWarning(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLLogMessage(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContext))
    static void DFLLogError(UObject* WorldContext, const FString& String, float Duration, const FString& CallingFunction);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugStraightLineOverrideDuration(UObject* Owner, const FVector Location, float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugStraightLineOverride(UObject* Owner, const FVector Location, FLinearColor Colour, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugStraightLine(UObject* Owner, const FVector Location, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugSphereOverrideDuration(UObject* Owner, const FVector Location, float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugSphereOverride(UObject* Owner, const FVector Location, float Radius, int32 Segments, FLinearColor LineColour, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugSphere(UObject* Owner, const FVector Location, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPointOverrideDuration(UObject* Owner, const FVector Location, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPointOverride(UObject* Owner, const FVector Location, const float Size, const FLinearColor Colour, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPoint(UObject* Owner, const FVector Location, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPlaneOverrideDuration(UObject* Owner, const FVector Location, const FVector Normal, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPlaneOverride(UObject* Owner, const FVector Location, const FVector Normal, const float Size, const FLinearColor Colour, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugPlane(UObject* Owner, const FVector Location, const FVector Normal, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLineOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLineOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, FLinearColor Colour, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLineDirectionOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector Direction, float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLineDirectionOverride(UObject* Owner, const FVector StartLocation, const FVector Direction, const float LineLength, FLinearColor Colour, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLineDirection(UObject* Owner, const FVector StartLocation, const FVector Direction, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugLine(UObject* Owner, const FVector StartLocation, const FVector EndLocation, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugFrustrumOverrideDuration(UObject* Owner, const FTransform FrustrumTransform, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugFrustrumOverride(UObject* Owner, const FTransform FrustrumTransform, const FLinearColor Colour, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugFrustrum(UObject* Owner, const FTransform FrustrumTransform, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCylinderOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCylinderOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Radius, const int32 Segments, const FLinearColor Colour, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCylinder(UObject* Owner, const FVector StartLocation, const FVector EndLocation, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugConeOverrideDuration(UObject* Owner, const FVector Location, const FVector Direction, const float AngleWidth, const float AngleHeight, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugConeOverride(UObject* Owner, const FVector Location, const FVector Direction, const float Length, const float AngleWidth, const float AngleHeight, const int32 NumSides, const FLinearColor Colour, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCone(UObject* Owner, const FVector Location, const FVector Direction, const float AngleWidth, const float AngleHeight, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCircleOverrideDuration(UObject* Owner, const FVector Center, const FVector YAxis, const FVector ZAxis, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCircleOverride(UObject* Owner, const FVector Center, const float Radius, const int32 Segments, FLinearColor Colour, const float Duration, const float Thickness, const FVector YAxis, const FVector ZAxis, const bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCircle(UObject* Owner, const FVector Center, const FVector YAxis, const FVector ZAxis, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCapsuleOverrideDuration(UObject* Owner, const FVector Center, FRotator Rotation, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCapsuleOverride(UObject* Owner, const FVector Center, const float HalfHeight, const float Radius, FRotator Rotation, const FLinearColor Colour, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCapsule(UObject* Owner, const FVector Center, FRotator Rotation, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCameraOverrideDuration(UObject* Owner, const UCameraComponent* Camera, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCameraOverride(UObject* Owner, const UCameraComponent* Camera, const float Scale, const FLinearColor Colour, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugCamera(UObject* Owner, const UCameraComponent* Camera, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugBoxOverrideDuration(UObject* Owner, const FVector Location, const FVector Extent, const FRotator Rotation, float Duration, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugBoxOverride(UObject* Owner, const FVector Location, const FVector Extent, const FLinearColor Colour, const FRotator Rotation, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugBox(UObject* Owner, const FVector Location, const FVector Extent, const FRotator Rotation, EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugArrowOverrideDuration(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float Duration, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugArrowOverride(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const float ArrowSize, const FLinearColor Colour, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugArrow(UObject* Owner, const FVector StartLocation, const FVector EndLocation, const EDFLDrawDebugColour DrawDebugColour);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugActorOverrideDuration(UObject* Owner, AActor* Actor, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugActorOverride(UObject* Owner, AActor* Actor, const float Scale, const float Duration, const float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DFLDrawDebugActor(UObject* Owner, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool BlueprintHasDebugProperties(const UBlueprint* Blueprint);
    
};

