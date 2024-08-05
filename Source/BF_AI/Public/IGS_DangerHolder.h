#pragma once
#include "CoreMinimal.h"
#include "IGS_DangerHolder.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIGS_DangerHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Danger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    BF_AI_API FIGS_DangerHolder();
};

