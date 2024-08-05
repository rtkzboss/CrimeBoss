#pragma once
#include "CoreMinimal.h"
#include "IGS_UGCBaseGameInstance.h"
#include "FindSessionsCallbackProxy.h"
#include "BPUniqueNetId.h"
#include "EBPLoginStatus.h"
#include "AdvancedFriendsGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ADVANCEDSESSIONS_API UAdvancedFriendsGameInstance : public UIGS_UGCBaseGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallFriendInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallIdentityInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallVoiceInterfaceEventsOnPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTalkingStatusDelegate;
    
    UAdvancedFriendsGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UserPrivilegeCheckInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, const FString& AppId, const FBlueprintSessionResult& SessionToJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
};

