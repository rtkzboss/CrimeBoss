#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "Components/ActorComponent.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_PlayerMetaTransferComponent.generated.h"

class AIGS_WieldableBase;
class IIGS_HeisterNumberInterface;
class UIGS_HeisterNumberInterface;
class IIGS_InventoryInterface;
class UIGS_InventoryInterface;
class UIGS_WieldableInventoryObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerMetaTransferComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IIGS_InventoryInterface> OwningCharacterInventoryInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IIGS_HeisterNumberInterface> OwningCharacterHeisterNumberInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBotControlled;
    
public:
    UIGS_PlayerMetaTransferComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerDownState(FIGS_HitInfo inHitInfo);
    
};

