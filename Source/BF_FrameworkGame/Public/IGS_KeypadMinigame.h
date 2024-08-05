#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_OnKeypadEndedDelegate.h"
#include "IGS_OnKeypadLeftDelegate.h"
#include "IGS_KeypadMinigame.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UInputComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_KeypadMinigame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnKeypadEnded OnKeypadEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnKeypadLeft OnKeypadLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnteredAnyCombination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrongCodeAddsStrike;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SolutionCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonPressAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* m_InstigatorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_InstigatorInputComponent;
    
public:
    AIGS_KeypadMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WinKeypad();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSuccess(bool inSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetKeypadCode(const FString& inCode);
    
    UFUNCTION(BlueprintCallable)
    void ResetKeypad();
    
    UFUNCTION(BlueprintCallable)
    void ReportWrongCodeEntered(AIGS_PlayerCharacter* inInstigator) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeypadWin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeypadRestart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeypadLose();
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayCodeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDigitHovered(int32 inDigit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientEscaped();
    
    UFUNCTION(BlueprintCallable)
    void LoseKeypad();
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HoverDigit(int32 inDigit);
    
    UFUNCTION(BlueprintCallable)
    void Escape(bool bForceEscapeWithoutNotifying);
    
    UFUNCTION(BlueprintCallable)
    void EnterDigit(int32 inDigit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Escape();
    
};

