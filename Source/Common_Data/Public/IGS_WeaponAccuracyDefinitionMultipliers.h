#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponAccuracyDefinitionMultipliers.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponAccuracyDefinitionMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpMult;
    
    FIGS_WeaponAccuracyDefinitionMultipliers();
};

