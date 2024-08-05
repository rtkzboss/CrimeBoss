#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRegularGlassStateChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRegularGlassStateChanged, FVector, HitLocation, bool, IsFirstFracture, AActor*, Instigator);

