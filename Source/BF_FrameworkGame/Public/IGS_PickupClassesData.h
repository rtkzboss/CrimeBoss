#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_PickupClassesCustomThrowingData.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupClassesData.generated.h"

class AIGS_PickupActorBase;
class AIGS_PickupActorInventoryItem;
class AIGS_WeaponPickupActor;
class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_PickupClassesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorInventoryItem> DefaultPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_WeaponPickupActor> WeaponPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorBase> EquipmentPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorBase> LootBagPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_PickupActorBase> GenericItemBagPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PickupClassesCustomThrowingData DefaultThrowingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PickupClassesCustomThrowingData WeaponThrowingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PickupClassesCustomThrowingData BagThrowingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereTestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_InventoryObjectFramework>, FIGS_PickupClassesCustomThrowingData> CustomThrowingData;
    
    UIGS_PickupClassesData();

};

