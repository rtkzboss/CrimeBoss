#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_MusicMissionState.h"
#include "EIGS_MusicStoryMissionState.h"
#include "IGS_MusicLevelTransitionDelegate.h"
#include "IGS_MusicPropertyChangedDelegate.h"
#include "IGS_MusicSubsystem.generated.h"

class UAkCallbackInfo;
class UAkStateValue;
class UIGS_MusicSongDataAsset;
class UIGS_MusicSubsystemDataAsset;
class UIGS_PersistentMusicAkComponent;
class UObject;

UCLASS(Blueprintable)
class BF_AUDIO_API UIGS_MusicSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MusicPropertyChanged OnMusicSystemInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MusicPropertyChanged OnMusicPropertyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MusicLevelTransition OnMusicGameStageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PersistentMusicAkComponent* PersistentMusicAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_MusicSubsystemDataAsset* Data;
    
public:
    UIGS_MusicSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetStoryMissionMusicState(EIGS_MusicStoryMissionState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetScenicMusicPack(UAkStateValue* inMusicPack);
    
    UFUNCTION(BlueprintCallable)
    static void SetPauseMusic(UObject* inWCO, bool inState);
    
    UFUNCTION(BlueprintCallable)
    static void SetMusicSongPlaylist(UObject* inWCO, TArray<UIGS_MusicSongDataAsset*> inPlaylist);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicScenicEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicScenicAutoEnableState(EIGS_MusicMissionState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionMusicState(EIGS_MusicMissionState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSwitchingEnable(bool inState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    UIGS_PersistentMusicAkComponent* GetPersistentMusicAkComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrerntMusicPack() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetMusicPack(bool inPreviousPack);
    
};

