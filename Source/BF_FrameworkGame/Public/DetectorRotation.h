#pragma once
#include "CoreMinimal.h"
#include "IGS_InterestPointHolder.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DetectorRotation.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UDetectorRotation : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookAtTarget, meta=(AllowPrivateAccess=true))
    FIGS_InterestPointHolder LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrollingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlledRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalHorizontalRotationAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalVerticalRotationAngleDegrees;
    
    UDetectorRotation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateRotationPointByDelta(float inHorizontalDeltaRotation, float inVerticalDeltaRotation);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtTarget(FIGS_InterestPointHolder inPreviousLookAtTarget);
    
    UFUNCTION(BlueprintCallable)
    bool IsCloseToFollowedPoint(float inDesiredHorzintalAngle, float inDesiredVerticalAngle) const;
    
    UFUNCTION(BlueprintCallable)
    void FullRotation(FVector inTarget, float inDeltaSeconds);
    
};

