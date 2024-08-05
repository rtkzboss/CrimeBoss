#pragma once
#include "CoreMinimal.h"
#include "IGS_AffectActorsDelayedEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AffectActorsDelayedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    FIGS_AffectActorsDelayedEntry();
};

