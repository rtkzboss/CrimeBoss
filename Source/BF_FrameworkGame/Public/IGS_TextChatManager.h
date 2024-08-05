#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_LocalTextMessageSentSignatureDelegate.h"
#include "IGS_TextChatStateChangedDelegate.h"
#include "IGS_TextMessageSentSignatureDelegate.h"
#include "IGS_TextChatManager.generated.h"

class UIGS_TextChatManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_TextChatManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChatOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TextMessageSentSignature OnTextMessageSentEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LocalTextMessageSentSignature OnLocalTextMessageSentEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TextChatStateChanged OnTextChatStateChanged;
    
    UIGS_TextChatManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendTextChatMessageTextOnly(const FText& inMessage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendTextChatMessage(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList);
    
    UFUNCTION(BlueprintCallable)
    void SendLocalTextChatMessage(const FText& inMessage);
    
    UFUNCTION(BlueprintCallable)
    void OpenChat();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendTextChatMessageTextOnly(const FText& inMessage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendTextChatMessage(const FText& inMessage, const FString& inPlayerName, const FString& inUserId, int32 inHeisterNum, const TArray<FString>& inSenderBlockedUsersList);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TextChatManager* GetTextChatManager(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    void CloseChat();
    
};

