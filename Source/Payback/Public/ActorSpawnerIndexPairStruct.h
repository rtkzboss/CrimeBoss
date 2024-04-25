#pragma once
#include "CoreMinimal.h"
#include "ActorSpawnerIndexPairStruct.generated.h"

class UIGS_PropActorSpawner;

USTRUCT(BlueprintType)
struct FActorSpawnerIndexPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PropActorSpawner* PropActorSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    PAYBACK_API FActorSpawnerIndexPairStruct();
};

