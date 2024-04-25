#pragma once
#include "CoreMinimal.h"
#include "EIGS_MusicMissionSource.h"
#include "IGS_MusicMissionSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MusicMissionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MusicMissionSource MissionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutsceneNoMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCutsceneNoSound;
    
    BF_AUDIO_API FIGS_MusicMissionSettings();
};

