#pragma once
#include "CoreMinimal.h"
#include "EIGS_PostProcessType.h"
#include "Camera/CameraComponent.h"
#include "IGS_CameraComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CameraComponentBase : public UCameraComponent {
    GENERATED_BODY()
public:
    UIGS_CameraComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_PostProcessType> GetGlobalPostProcesses() const;
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalPostProcessType(TArray<EIGS_PostProcessType> inPostProcessTypesArray);
    
};

