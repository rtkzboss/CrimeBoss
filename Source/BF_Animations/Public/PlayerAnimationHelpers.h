#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PlayerAnimationHelpers.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UPlayerAnimationHelpers : public UObject {
    GENERATED_BODY()
public:
    UPlayerAnimationHelpers();

    UFUNCTION(BlueprintCallable)
    static void GetCurrentAimOffset(UAnimInstance* inAnimInstance, FVector& OutLocation, FVector& OutRotation);
    
};

