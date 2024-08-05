#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "IGS_AimAssistComponent.generated.h"

class AActor;
class UIGS_AimAssistConfigDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AimAssistComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSlowdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSoftLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBulletBending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalingByResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseResolutionForScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalingByFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseFOVForScaling;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCircles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCirclesOnlyWithValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugOverlayBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowValidTargetSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTargetTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AimAssistConfigDataAsset* MouseAimAssistDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AimAssistConfigDataAsset* ControllerAimAssistDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AimAssistConfigDataAsset* CurrentAimAssistDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> ObstacleCheckTraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDeviceChangedToGamepadDelay;
    
public:
    UIGS_AimAssistComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetDestroyed(AActor* inDestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneScalingEnabledForSoftLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneScalingEnabledForSlowdown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZoneScalingEnabledForBulletBending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftLockEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlowdownEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBulletBendingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCurrentBulletBendingTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetControlMultipliers(float& outPitchMult, float& outYawMult) const;
    
};

