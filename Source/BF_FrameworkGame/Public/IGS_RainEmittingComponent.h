#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_RainEmittingComponent.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_RainEmittingComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* WorldRainEffectParticleSystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ParticleComponent;
    
public:
    UIGS_RainEmittingComponent(const FObjectInitializer& ObjectInitializer);

};

