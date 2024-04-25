#pragma once
#include "CoreMinimal.h"
#include "IGS_DialoguePoseAnimationOverride.h"
#include "IGS_DialogueCameraOverride.generated.h"

class ACineCameraActor;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_DialogueCameraOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACineCameraActor*> TranscriptCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TranscriptDelayes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_DialoguePoseAnimationOverride> TranscriptPoseAnimation;
    
    FIGS_DialogueCameraOverride();
};

