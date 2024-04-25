#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MusicSongDataAsset.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(Blueprintable)
class BF_AUDIO_API UIGS_MusicSongDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> SongAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SongAkEvent;
    
    UIGS_MusicSongDataAsset();

};

