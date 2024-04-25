#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactHitParameter.h"
#include "EIGS_ItemPropertyFlags.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupActorInventoryItem.generated.h"

class AActor;
class AController;
class UIGS_InventoryObjectFramework;
class UIGS_ModInventoryObject;
class UIGS_OutlineComponent;
class UIGS_PickupInteractiveComponent;
class UIGS_WeaponSkinData;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PickupActorInventoryItem : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PickupInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_OutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponSkin, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> R_WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponSkinData* LoadedWeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponSkinData* LoadedWeaponSpecificSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_InventoryObjectFramework> R_ItemClassToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemMods, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ModInventoryObject>> R_ItemModsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount, meta=(AllowPrivateAccess=true))
    int32 R_GlobalItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount, meta=(AllowPrivateAccess=true))
    bool R_bCustomStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCount, meta=(AllowPrivateAccess=true))
    int32 R_EquipmentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniversalData, meta=(AllowPrivateAccess=true))
    FIGS_InventoryObjectUniversalData R_UniversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrefixText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bWasDropped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsGlobalItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsEquipment;
    
public:
    AIGS_PickupActorInventoryItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponSkin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UniversalData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemMods();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemClass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupDamageEvent(float inDamage, const FHitResult& inHitInfo, AController* inEventInstigator, AActor* inDamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FIGS_ImpactHitParameter OnCustomizeHitImpactParam(FIGS_ImpactHitParameter InParams);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds GetMeshBounds();
    
    UFUNCTION(BlueprintCallable)
    bool DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkin(TSoftObjectPtr<UIGS_WeaponSkinData> inNewSkin, TSoftObjectPtr<UIGS_WeaponSkinData> inNewSpecificSkin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyUniversalData(FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintCallable)
    void AddMods(const TArray<TSubclassOf<UIGS_ModInventoryObject>>& inMods);
    
};

