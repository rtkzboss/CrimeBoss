#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaCutsceneCharacterPoseData.h"
#include "IGS_MetaCutscenePoseSet.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutscenePoseSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MetaCutsceneCharacterPoseData> PoseSets;
    
    FIGS_MetaCutscenePoseSet();
};

