#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_PostProcessType.h"
#include "IGS_GlobalPostProcessSubsystem.generated.h"

class UCameraComponent;
class UIGS_GlobalPostProcessSubsystem;
class UIGS_GlobalPostProcessesDataAsset;
class UObject;

UCLASS(Blueprintable)
class BF_RENDERING_API UIGS_GlobalPostProcessSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GlobalPostProcessesDataAsset* m_GloballyAppliedPostProcesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> m_VisualStylePostProcesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> m_VisorPostProcesses;
    
public:
    UIGS_GlobalPostProcessSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemovePostProcessesFromCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_GlobalPostProcessSubsystem* Instance(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPostProcessesToCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes);
    
};

