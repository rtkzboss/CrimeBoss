#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateMenuBase.h"
#include "META_GameStateBase.generated.h"

class AMETA_BaseGameMode;
class UIGS_SubtitleManager;
class UMETA_CommonData;
class UMETA_EconomyData;

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API AMETA_GameStateBase : public AIGS_GameStateMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* MetaGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubtitleManager* SubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_CommonData* CommonMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_EconomyData* EconomyMetaData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bInitialized, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    AMETA_GameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerInitialize_Internal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsCareerCompleted(bool& outCareerCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientInitialize_Internal();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Initialize();
    
};

