#pragma once
#include "CoreMinimal.h"
#include "IGS_ReplicationCharacterAimingDataHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ReplicationCharacterAimingDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimInSpeedMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOutSpeedMult;
    
    BF_NETWORK_API FIGS_ReplicationCharacterAimingDataHolder();
};

