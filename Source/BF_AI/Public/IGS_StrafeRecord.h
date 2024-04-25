#pragma once
#include "CoreMinimal.h"
#include "IGS_StrafeRecord.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_StrafeRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FIGS_StrafeRecord();
};

