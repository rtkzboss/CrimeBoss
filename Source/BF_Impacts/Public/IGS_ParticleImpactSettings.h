#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactSettings.h"
#include "IGS_ParticleImpactSettings.generated.h"

class UIGS_ImpactTypeObject;
class UNiagaraSystem;
class UParticleSystem;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ParticleImpactSettings : public FIGS_ImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ParticleSystemPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> NiagaraSystemPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ImpactTypeObject> ParticleDecalIDSoft;
    
    FIGS_ParticleImpactSettings();
};

