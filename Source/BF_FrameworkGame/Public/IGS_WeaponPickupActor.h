#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "EIGS_ItemPropertyFlags.h"
#include "EIGS_ModType.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "GameplayTagContainer.h"
#include "IGS_ModMeshInterface.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponPickupActor.generated.h"

class UIGS_ModInventoryObject;
class UIGS_OutlineComponent;
class UIGS_PickupInteractiveComponent;
class UIGS_PingableComponent;
class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;
class UMETA_WeaponInventoryObject;
class USkeletalMesh;
class USkeletalMeshComponentBudgeted;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_WeaponPickupActor : public AIGS_PickupActorBase, public IIGS_ModMeshInterface, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PickupInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_OutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PingableComponent* PingableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_WeaponInventoryObject> R_WeaponClassToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniversalData, meta=(AllowPrivateAccess=true))
    FIGS_InventoryObjectUniversalData R_UniversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrefixText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WieldableInventoryObjectBase> WeaponPlatformID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponSkin, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSkinTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponSkinData* LoadedWeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponSkinData* LoadedWeaponSpecificSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* LoadedWeaponMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* WeaponPickupSkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SightModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisibilityModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BarrelModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GripModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MagazineModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StockModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WeaponModsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_ModType> ActiveModTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_ModType> LoadedMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVisible, meta=(AllowPrivateAccess=true))
    bool mR_IsVisible;
    
public:
    AIGS_WeaponPickupActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UMETA_WeaponInventoryObject>& inItemClass, const TSoftObjectPtr<UIGS_WeaponSkinData> inSkin);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponSkin();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponClass();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UniversalData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVisible();
    
public:
    UFUNCTION(BlueprintCallable)
    bool DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyUniversalData(FIGS_InventoryObjectUniversalData inUniversalData);
    

    // Fix for true pure virtual functions not being implemented
};

