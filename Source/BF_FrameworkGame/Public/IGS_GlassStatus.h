#pragma once
#include "CoreMinimal.h"
#include "EIGS_TemperedGlassStatus.h"
#include "IGS_GlassHit.h"
#include "IGS_GlassStatus.generated.h"

USTRUCT(BlueprintType)
struct FIGS_GlassStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TemperedGlassStatus State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_GlassHit> PreviousHitPoints;
    
    BF_FRAMEWORKGAME_API FIGS_GlassStatus();
};

