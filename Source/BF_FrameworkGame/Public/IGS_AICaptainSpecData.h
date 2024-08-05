#pragma once
#include "CoreMinimal.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_AICaptainSpecData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICaptainSpecData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_UnitSpecialization Specialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIGS_GameCharacterFramework> VIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedChance;
    
    FIGS_AICaptainSpecData();
};

