#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "IGS_MenuController.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_MenuController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComesFromMission;
    
    AIGS_MenuController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientWasKickedEvent(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientForcedToLeaveLobbyEvent();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ForceLeaveLobby();
    
};

