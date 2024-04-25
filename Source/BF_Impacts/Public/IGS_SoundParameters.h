#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_FootstepSoundParameters.h"
#include "IGS_HitSoundParameters.h"
#include "IGS_MeleeSoundParameters.h"
#include "IGS_SoundParameters.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_SoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FootstepSoundParameters FootstepParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MeleeSoundParameters MeleeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HitSoundParameters HitParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAkComponent> CustomAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PoolTags;
    
    FIGS_SoundParameters();
};

