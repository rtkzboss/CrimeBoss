#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_LevelTransitionType.h"
#include "IGS_LevelTransitionSignatureDelegate.h"
#include "IGS_LevelTransitionStateChangedSignatureDelegate.h"
#include "IGS_LevelTransitionManager.generated.h"

class UIGS_LevelTransitionDataAsset;

UCLASS(Blueprintable)
class BF_LOADING_API UIGS_LevelTransitionManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSignature OnLevelLoadAttemptSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSignature OnLevelLoadAttemptFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSignature OnLevelLoadInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSignature OnLevelLoadStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionSignature OnLevelLoadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionStateChangedSignature OnLevelTransitionStateChangeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LevelTransitionStateChangedSignature OnLevelTransitionStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_LevelTransitionType CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_LevelTransitionDataAsset* Data;
    
public:
    UIGS_LevelTransitionManager();

    UFUNCTION(BlueprintCallable)
    void StopAttemptLoadingLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetLevelLoadTransitionState(EIGS_LevelTransitionType inState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_LevelTransitionType GetLevelTransitionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLevelLoadState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelayTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClientTravel(FName inLevelName);
    
    UFUNCTION(BlueprintCallable)
    bool AttemptServerTravel(FName inLevelName, const FString& inOptions);
    
    UFUNCTION(BlueprintCallable)
    bool AttemptOpenLevel(FName inLevelName, bool inAbsolute, const FString& inOptions);
    
};

