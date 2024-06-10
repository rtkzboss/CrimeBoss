#include "Speedometer.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

USpeedometer::USpeedometer() : UUserWidget(FObjectInitializer::Get()) {
}

void USpeedometer::SetSpeed_Implementation(float inSpeed) {
}

void USpeedometer::SetRPM_Implementation(float InRPM) {
}


