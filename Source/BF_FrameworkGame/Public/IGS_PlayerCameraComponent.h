#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_EyeHeightTargetType.h"
#include "IGS_CameraComponentBase.h"
#include "IGS_CameraShake.h"
#include "IGS_EyeHeightHolder.h"
#include "IGS_PlayerCameraComponent.generated.h"

class AIGS_PlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerCameraComponent : public UIGS_CameraComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_EyeHeightTargetType, FIGS_EyeHeightHolder> EyeHeightHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_EyeHeightTargetType CurrentEyeHeightTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEyeHeightTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraBoneWrongAxisFix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLadderTopEndInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLadderRootMotionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVInterpolationEndTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraShakeTags, meta=(AllowPrivateAccess=true))
    TArray<FIGS_CameraShake> ActiveCameraShakes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBoneAttachment;
    
public:
    UIGS_PlayerCameraComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopCameraShake(const FGameplayTag inCameraShakeTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOVOverrideInterpolated(bool inOverrideFOV, float inFOVValue, bool inTortillaEnabled, float inInterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOVOverride(bool inOverrideFOV, float inFOVValue, float inTortillaBlendEffect);
    
    UFUNCTION(BlueprintCallable)
    void PlayCameraShake(const FGameplayTag inCameraShakeTag, float inIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CameraShakeTags();
    
    UFUNCTION(BlueprintCallable)
    static EIGS_EyeHeightTargetType GetEyeHeightTarget(AIGS_PlayerCharacter* inPlayerCharacter, bool inAiming);
    
};

