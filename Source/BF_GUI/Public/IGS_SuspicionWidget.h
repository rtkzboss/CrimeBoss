#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_SuspicionWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UIGS_SuspicionManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_SuspicionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerCharacter> PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
public:
    UIGS_SuspicionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StrikesAdded(int32 inStrikes, int32 inStrikeIncrease, const FText& inBlame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSuspicionChanged(AIGS_GameCharacterFramework* inPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecurityTierChanged(EIGS_RoomSecurityType inRoomSecurity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HQSuspicionValueChanged(float inNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HQSuspicionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HQSuspicionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Alarmed(const FText& inBlameText);
    
};

