#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_DecalParameters.h"
#include "IGS_ParticleParameters.h"
#include "IGS_SoundParameters.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactParameters.generated.h"

class UIGS_ImpactTypeObject;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_ImpactParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SoundParameters SoundParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ParticleParameters ParticleParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DecalParameters DecalParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    FIGS_ImpactParameters();
};

