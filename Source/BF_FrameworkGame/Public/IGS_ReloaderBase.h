#pragma once
#include "CoreMinimal.h"
#include "EIGS_ReloadInterruptReasonEnum.h"
#include "Components/ActorComponent.h"
#include "WeaponInterrutpReloadSignatureDelegate.h"
#include "WeaponReloadSignatureDelegate.h"
#include "IGS_ReloaderBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ReloaderBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInterruptible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadSignature OnWeaponBeginReload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadSignature OnWeaponStopReload;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponInterrutpReloadSignature OnWeaponInterruptReload;
    
    UIGS_ReloaderBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAddAmmoToWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptReload(EIGS_ReloadInterruptReasonEnum inReason, bool inIsImmediate, bool inForce);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentReloadSpeed(bool inIsCombat, bool inIsEmptyMagazine);
    
    UFUNCTION(BlueprintCallable)
    bool CanReload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeInterrupted() const;
    
};

