#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_GameStateMenuBase.h"
#include "META_Sequence.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_Sequence> m_SequencesQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentSequenceTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentSequenceItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Sequence CurrentSequence;
    
public:
    AMETA_GameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartSequence(FGameplayTag inSequenceTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerInitialize_Internal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequenceInProgress() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void IsCareerCompleted(bool& outCareerCompleted);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteSequenceItem(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteNextSequenceItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientInitialize_Internal();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Initialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSequence(UPARAM(Ref) FMETA_Sequence& InSequence);
    
};

