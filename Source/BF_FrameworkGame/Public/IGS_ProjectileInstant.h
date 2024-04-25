#pragma once
#include "CoreMinimal.h"
#include "IGS_ProjectileBase.h"
#include "IGS_ProjectileInstant.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProjectileInstant : public AIGS_ProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TracerEffectNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TracerEffectNiagaraFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracerEffectNiagaraChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracerEffectNiagaraChanceFPV;
    
    AIGS_ProjectileInstant(const FObjectInitializer& ObjectInitializer);

};

