#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_DamageData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HitInfo HitInfo;
    
    BF_FRAMEWORKBASE_API FIGS_DamageData();
};

