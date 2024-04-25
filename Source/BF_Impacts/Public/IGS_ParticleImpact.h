#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "IGS_ImpactBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ParticleImpact.generated.h"

class UIGS_ImpactTypeObject;
class UNiagaraComponent;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_IMPACTS_API AIGS_ParticleImpact : public AIGS_ImpactBase, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ParticleDecalID;
    
public:
    AIGS_ParticleImpact(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSystemFinished(UParticleSystemComponent* inParticleComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* inNiagaraComponent);
    

    // Fix for true pure virtual functions not being implemented
};

