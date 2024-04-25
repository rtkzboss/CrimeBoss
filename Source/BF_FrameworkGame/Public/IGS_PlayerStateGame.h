#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "IGS_PlayerStateFramework.h"
#include "CommonHeisterData.h"
#include "CommonHeisterLoadout.h"
#include "GameFramework/OnlineReplStructs.h"
#include "IGS_IsLevelLoadedDelegateDelegate.h"
#include "IGS_PlayerStateData.h"
#include "IGS_PlayerStatePlayerDataUpdateReceivedDelegateDelegate.h"
#include "IGS_PlayerStateGame.generated.h"

class AController;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerStateGame : public AIGS_PlayerStateFramework, public IIGS_HeisterDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_IsLevelLoadedDelegate OnIsJustLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_IsLevelLoadedDelegate OnIsLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerStatePlayerDataUpdateReceivedDelegate OnPlayerStateDataUpdateReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsJustLevelLoaded, meta=(AllowPrivateAccess=true))
    bool IsJustLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsLevelLoaded, meta=(AllowPrivateAccess=true))
    bool IsLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsReady, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FIGS_PlayerStateData PlayerStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HeisterNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* m_OwningController;
    
public:
    AIGS_PlayerStateGame(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ShouldUsePlayerStateLoadout();
    
    UFUNCTION(BlueprintCallable)
    void SetHeisterLoadout(FCommonHeisterLoadout inLoadout);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedPlayerName(FText InName);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsLevelLoaded();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsJustLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendTextChatMessage(const FText& InText, const FString& inUserId, const TArray<FString>& inBlockedUsersList);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLevelLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsJustLevelLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsReady() const;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_SendPlayerData(FIGS_PlayerStateData inPlayerData);
    
protected:
    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetUniquePlayerID();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeammateStatus(float& outCurrentHP, float& outMaxHP, float& outRelativeHP, float& outRelativeShield, float& outRelativeArmor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCommonHeisterData GetHeisterData() const;
    

    // Fix for true pure virtual functions not being implemented
};

