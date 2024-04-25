#pragma once
#include "CoreMinimal.h"
#include "IGS_DecalImpactSettings.h"
#include "IGS_ParticleImpactSettings.h"
#include "IGS_SoundImpactSettings.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactItem.generated.h"

class UAkAudioEvent;
class UIGS_DecalImpactDataAsset;
class UIGS_ImpactTypeObject;
class UNiagaraSystem;
class UParticleSystem;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ImpactTypeObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SoundImpactSettings SoundSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ParticleImpactSettings ParticleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalImpactSettings DecalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ParticleDecalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_DecalImpactDataAsset* DecalImpactData;
    
    FIGS_ImpactItem();
};

