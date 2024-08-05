#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "IGS_PooledParticle.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class BF_POOL_API AIGS_PooledParticle : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    AIGS_PooledParticle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent);
    
};

