#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Speedometer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_RIDEABLEVEHICLES_API USpeedometer : public UUserWidget {
    GENERATED_BODY()
public:
    USpeedometer();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSpeed(float inSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRPM(float InRPM);
    
};

