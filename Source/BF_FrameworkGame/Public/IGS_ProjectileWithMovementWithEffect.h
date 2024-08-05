#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileWithMovement.h"
#include "IGS_ProjectileWithMovementWithEffect.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProjectileWithMovementWithEffect : public AIGS_ProjectileWithMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentMovement;
    
public:
    AIGS_ProjectileWithMovementWithEffect(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnParticleMovementFinished(UParticleSystemComponent* inParticleSystemComponent);
    
};

