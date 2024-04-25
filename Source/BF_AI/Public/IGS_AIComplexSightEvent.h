#pragma once
#include "CoreMinimal.h"
#include "IGS_AIComplexSightEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_AIComplexSightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    FIGS_AIComplexSightEvent();
};

