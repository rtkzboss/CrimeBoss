#pragma once
#include "CoreMinimal.h"
#include "IGS_AlarmDeviceBase.h"
#include "IGS_TelephoneBase.generated.h"

class AIGS_ControlRoomBase;
class AIGS_GameCharacterFramework;
class UIGS_StealthSettingsInstance;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_TelephoneBase : public AIGS_AlarmDeviceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRinging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPublicTelephone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_ControlRoomBase* ControlRoom;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_StealthSettingsInstance* m_StealthSettingsInstance;
    
public:
    AIGS_TelephoneBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerAlarm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTelephoneRingEnded(bool inAnswered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTelephoneRing();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginCheckInCall();
    
    UFUNCTION(BlueprintCallable)
    void AnswerCall(AIGS_GameCharacterFramework* inInstigator);
    
};

