#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "IGS_CommonItemData.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_PickupActorBase.h"
#include "IGS_AmmoBoxBase.generated.h"

class UAkAudioEvent;
class UIGS_InteractiveComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_AmmoBoxBase : public AIGS_PickupActorBase, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupSoundAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AmmoBoxItem InitialBoxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoxIDChanged, meta=(AllowPrivateAccess=true))
    EIGS_AmmoBoxItem mR_BoxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CommonItemData CommonData;
    
public:
    AIGS_AmmoBoxBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBox(EIGS_AmmoBoxItem inBoxID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BoxIDChanged();
    

    // Fix for true pure virtual functions not being implemented
};

