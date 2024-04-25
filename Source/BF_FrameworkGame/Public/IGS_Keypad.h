#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_Keypad.generated.h"

class AIGS_PlayerCharacter;
class APawn;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class USpotLightComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_Keypad : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeypadCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KeycodePassAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KeycodeFailAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonPressAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* GreenLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* RedLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* CodeTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextRenderComponent*> ButtonsTextRenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonHighlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToClearAfterFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximalCodeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_IsInUse;
    
public:
    AIGS_Keypad(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetButtonHighlightAfterDelay(int32 inButtonId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ProcessButtonLetter(const FString& inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ProcessClick();
    
    UFUNCTION(BlueprintCallable)
    void OnKeypadUsed(APawn* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeypadEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeycodePass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeycodeFail();
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable)
    void KeyboardKeyPressed(const FString& inKey);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnKeypadUsed(AIGS_PlayerCharacter* inPlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Escape();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SetLightStatus(bool InVisibility, bool inFailed) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_SetCodeTextRender(const FText& inCodeText);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnKeycodeCheckResult(bool inPassed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnButtonPressed(int32 inButtonId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnButtonHighlightOff(int32 inButtonId);
    
};

