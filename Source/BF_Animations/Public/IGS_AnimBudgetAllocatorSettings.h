#pragma once
#include "CoreMinimal.h"
#include "AnimationBudgetAllocatorParameters.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_AnimBudgetAllocatorSettings.generated.h"

UCLASS(Blueprintable)
class BF_ANIMATIONS_API UIGS_AnimBudgetAllocatorSettings : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PauseAnimSignificanceThreshold;
    
    UIGS_AnimBudgetAllocatorSettings();

    UFUNCTION(BlueprintCallable)
    void SetParameters(const FAnimationBudgetAllocatorParameters& inParameters);
    
};

