#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Curves/CurveFloat.h"
#include "IGS_StealthSettingsInstance.generated.h"

class UIGS_StealthSettings;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_StealthSettingsInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_StealthSettings* StealthSettings;
    
    UIGS_StealthSettingsInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionHalfAngleDegGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionHalfAngleDegGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionHalfAngleDegEmployee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionHalfAngleDegCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionHalfAngleDegCiv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionConeMaxDistanceGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionConeMaxDistanceGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionConeMaxDistanceEmployee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionConeMaxDistanceCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisionConeMaxDistanceCiv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFootstepDetection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStrikeAddedCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthTakedownRangeMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthTakedownMinAngleTreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthTakedownDamageMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStealthRangedDamageMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSprintDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShoutCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayPlayerGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayPlayerGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayPlayerCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayActorGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayActorGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffenceReactionDelayActorCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFollowerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFootstepDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeFloatCurve GetDistanceDetectionSpeedCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpSecondStageMultiplierGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpSecondStageMultiplierGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpSecondStageMultiplierCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpMuliplierEmployee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpMuliplierCiv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpFirstStageMultiplierGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpFirstStageMultiplierGangster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionUpFirstStageMultiplierCop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionMidPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionIncreaseThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectionDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetectedCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultDetectionUpTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouchDetectionMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCombatStateDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCivEscapedStrikeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCivEscapedDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraDetectionUpTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraDetectionPlayerIdleCoef() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraDetectionDownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBotDetectionMuliplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeFloatCurve GetAngleDetectionSpeedCurve() const;
    
};

