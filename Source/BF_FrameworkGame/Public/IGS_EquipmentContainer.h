#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnEquipmentPickedUpDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentContainer.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_PickupInteractiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_EquipmentContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PickupInteractiveComponent* PickupInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EquipmentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bContainerEnabled, meta=(AllowPrivateAccess=true))
    bool mR_bContainerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_EquipmentInventoryObject> EquipmentToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRechargable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilRecharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnEquipmentPickedUp OnPickedUpEvent;
    
    AIGS_EquipmentContainer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupInteraction();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bContainerEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMesh();
    
};

