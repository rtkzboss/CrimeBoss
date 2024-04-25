#pragma once
#include "CoreMinimal.h"
#include "CustomMissionData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_EditorSubsystemFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PAYBACK_API UIGS_EditorSubsystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_EditorSubsystemFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UseCustomMission();
    
    UFUNCTION(BlueprintCallable)
    static FCustomMissionData GetCustomMission();
    
};

