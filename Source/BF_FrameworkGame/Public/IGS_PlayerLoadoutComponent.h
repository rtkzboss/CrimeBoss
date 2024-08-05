#pragma once
#include "CoreMinimal.h"
#include "META_PerkDataToFPS.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_Ability1ChangedDelegate.h"
#include "IGS_LoadoutInitializedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerLoadoutComponent.generated.h"

class AIGS_GameCharacterFramework;
class IIGS_InventoryInterface;
class UIGS_InventoryInterface;
class UGameplayEffect;
class UIGS_EquipmentInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerLoadoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LoadoutInitializedSignature OnLoadoutInitializedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_Ability1Changed OnAbility1Changed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_EquipmentInventoryObject> CurrentEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SubtractChargeGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IIGS_InventoryInterface> OwningCharacterInventoryInterface;
    
public:
    UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OverrideAbility1Charges(const int32 inCharges);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GivePerks(const TArray<FMETA_PerkDataToFPS>& inPerkIDs);
    
    UFUNCTION(BlueprintCallable)
    void Selfrevive();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeLoadout();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDownState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_EquipmentInventoryObject* GetCurrentEquipmentObject();
    
    UFUNCTION(BlueprintCallable)
    void ForceDownstateUseAbility();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetEquipmentData(float inTimestamp, int32 inCount, int32 inKillCount);
    
};

