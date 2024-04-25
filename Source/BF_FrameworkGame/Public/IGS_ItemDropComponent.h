#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_ItemDroppedDelegate.h"
#include "IGS_OnDeathItemsDroppedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_ItemDropComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PickupActorBase;
class AIGS_PickupActorInventoryItem;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_InventoryObjectFramework;
class UIGS_PickupClassesData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ItemDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> ItemsUponDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> ItemsUponTie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorBase> WalkieTalkieClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorInventoryItem> PickupActorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnWalkieTalkie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropUponZipAndDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDeathItemsDropped OnDeathItemsDroppedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ItemDropped OnItemDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PickupClassesData* PickupClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateAmmoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterWieldablesHolderComponent* CharacterWieldablesHolderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemSpawnPointTransform;
    
public:
    UIGS_ItemDropComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DropItem(TSubclassOf<UIGS_InventoryObjectFramework> inClass) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DropBags() const;
    
    UFUNCTION(BlueprintCallable)
    void AddItemToDropUponTie(TSubclassOf<UIGS_InventoryObjectFramework> inClass);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToDropUponDeath(TSubclassOf<UIGS_InventoryObjectFramework> inClass);
    
    UFUNCTION(BlueprintCallable)
    static void AddItemToDropForCharacter(AIGS_GameCharacterFramework* inCharacter, TSubclassOf<UIGS_InventoryObjectFramework> inClass, FIGS_ItemDropped inDelegateHandle);
    
};

