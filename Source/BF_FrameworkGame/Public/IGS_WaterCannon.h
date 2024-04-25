#pragma once
#include "CoreMinimal.h"
#include "IGS_MountedWeapon.h"
#include "InteractedWithWaterTurretDelegate.h"
#include "IGS_WaterCannon.generated.h"

class AIGS_HoseSegmentBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_WaterCannon : public AIGS_MountedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractedWithWaterTurret InteractedWithWaterTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_HoseSegmentBase* WaterHoseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurretID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsItemInInventory;
    
public:
    AIGS_WaterCannon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RemoveUnusedTurrets_MULTICAST();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MakeVisible_MULTICAST();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void CheckItemAndMakeVisible_SERVER();
    
};

