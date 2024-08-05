#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "EIGS_CharacterID.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_TeammateHealthInfoSingleWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerStateGame;
class UIGS_ObjectStatus;
class UIGS_PlayerStatus;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_TeammateHealthInfoSingleWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* TeammatePawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ObjectStatus* TeammateObjectStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerStatus* TeammatePlayerStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerStateGame* TeammatePlayerState;
    
    UIGS_TeammateHealthInfoSingleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterGameCharacterEvents(AIGS_GameCharacterFramework* inGameCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RelativeHealthChangedEvent(float inRelativeHealth);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterGameCharacterEvents(AIGS_GameCharacterFramework* inGameCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HealthStateChangedEvent(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeathEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterIDChanged(EIGS_CharacterID inCharacterID);
    
};

