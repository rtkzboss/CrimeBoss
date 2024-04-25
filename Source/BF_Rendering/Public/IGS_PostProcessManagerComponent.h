#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PostProcessManagerComponent.generated.h"

class IBlendableInterface;
class UBlendableInterface;
class UCameraComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_RENDERING_API UIGS_PostProcessManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
public:
    UIGS_PostProcessManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPostProcessWeight(const TScriptInterface<IBlendableInterface>& PostProcess, float inWeight);
    
    UFUNCTION(BlueprintCallable)
    void RemovePostProcessDirect(const TScriptInterface<IBlendableInterface>& PostProcess);
    
    UFUNCTION(BlueprintCallable)
    void RemovePostProcess(const TScriptInterface<IBlendableInterface>& PostProcess);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePostProcess(const TScriptInterface<IBlendableInterface>& PostProcess, float Weight, float Duration, float Speed);
    
};

