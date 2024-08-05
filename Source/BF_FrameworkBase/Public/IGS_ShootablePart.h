#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "IGS_ShootablePart.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ShootablePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference VisibleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReducesDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DamagePenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChanceToShootOff;
    
    BF_FRAMEWORKBASE_API FIGS_ShootablePart();
};

