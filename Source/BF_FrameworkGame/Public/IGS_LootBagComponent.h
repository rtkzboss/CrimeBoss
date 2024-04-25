#pragma once
#include "CoreMinimal.h"
#include "IGS_LootBagSingleItem.h"
#include "Components/ActorComponent.h"
#include "EIGS_BagType.h"
#include "IGS_CurrentLootBagCountChangedClientOnlyEventSignatureDelegate.h"
#include "IGS_CurrentLootBagCountChangedEventSignatureDelegate.h"
#include "IGS_CurrentlyFilledBagItemAddedEventSignatureDelegate.h"
#include "IGS_EmptyBagCreatedEventSignatureDelegate.h"
#include "IGS_LootBagInfo.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootBagComponent.generated.h"

class UAkAudioEvent;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootBagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CurrentLootBagCountChangedEventSignature OnCurrentLootBagCountChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CurrentLootBagCountChangedClientOnlyEventSignature OnCurrentLootBagCountClientOnlyChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CurrentlyFilledBagItemAddedEventSignature OnCurrentlyFilledBagItemAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EmptyBagCreatedEventSignature OnEmptyBagCreatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTakeThrownLootBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_LootBagInfo> LootBagsInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NewBagCreatedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> HasMaxBagsGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBagsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_isTransferingBag;
    
public:
    UIGS_LootBagComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StashPocketLoot();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetTransferingBag(bool inTransfering);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPendingCarryable(bool inPending);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_PlayBagCreatedSound();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NewLootBag();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReceiveBag(TArray<FIGS_LootBagSingleItem> inItemClasses);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayBagCreatedSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarryingLootBag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarryingLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMaxBags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerLootWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxBagsAmount() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootBagSingleItem> GetItemsAndRemoveCurrentlyBeingFilledBag();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentlyBeingFilledBagBP(FIGS_LootBagInfo& OutInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_BagType> GetBagTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_LootBagInfo> GetBagsInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceRemoveLastFilledBag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesBagExist() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPocketLootAndAddToSecuredLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BagsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BagsCount() const;
    
};

