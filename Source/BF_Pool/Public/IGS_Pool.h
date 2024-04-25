#pragma once
#include "CoreMinimal.h"
#include "IGS_Pool.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_POOL_API FIGS_Pool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Items;
    
    FIGS_Pool();
};

