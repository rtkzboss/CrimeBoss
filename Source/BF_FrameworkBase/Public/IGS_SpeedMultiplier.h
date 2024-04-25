#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "IGS_SpeedMultiplier.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_SpeedMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ActiveGEHandle;
    
    FIGS_SpeedMultiplier();
};

