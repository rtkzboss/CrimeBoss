#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_CutsceneCharacterKey.h"
#include "IGS_CutsceneSubsystemDataAsset.generated.h"

class AIGS_CharacterPaperDoll;
class UAkAudioEvent;
class UAkStateValue;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_CutsceneSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIGS_CutsceneCharacterKey, TSoftClassPtr<AIGS_CharacterPaperDoll>> CharactersPaperdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* CutsceneAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoMusicAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoSoundAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* NoCutsceneAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* ResetEnvironmentAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CustomMusicStopAkEvent;
    
    UIGS_CutsceneSubsystemDataAsset();

};

