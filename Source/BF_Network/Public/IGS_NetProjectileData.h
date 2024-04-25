#pragma once
#include "CoreMinimal.h"
#include "IGS_NetProjectileHitData.h"
#include "IGS_NetProjectileHitResult.h"
#include "IGS_NetProjectileData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_NetProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NetProjectileHitResult NetProjectileHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_NetProjectileHitData NetProjectileHitData;
    
    BF_NETWORK_API FIGS_NetProjectileData();
};

