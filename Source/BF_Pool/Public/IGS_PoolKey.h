#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_PoolKey.generated.h"

USTRUCT(BlueprintType)
struct BF_POOL_API FIGS_PoolKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PoolObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PoolTagContainer;
    
    FIGS_PoolKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_PoolKey) { return 0; }

