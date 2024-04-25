#pragma once
#include "CoreMinimal.h"
#include "ActorInfoStruct.h"
#include "PropActorInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropActorInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotVariationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorInfoStruct> ActorsToSpawn;
    
    PAYBACK_API FPropActorInfoStruct();
};

