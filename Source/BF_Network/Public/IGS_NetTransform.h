#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_NetTransform.generated.h"

USTRUCT(BlueprintType)
struct FIGS_NetTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Rotation;
    
    BF_NETWORK_API FIGS_NetTransform();
};

