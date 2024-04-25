#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "Engine/EngineTypes.h"
#include "EEasingType.h"
#include "EPFFactorOperation.h"
#include "EPFLoopType.h"
#include "EPFRollInterpType.h"
#include "EventPoint.h"
#include "PFEventPoints.h"
#include "PFPathRoller.h"
#include "PFSpeedCurve.h"
#include "ReachedEndSignatureDelegate.h"
#include "ReachedStartSignatureDelegate.h"
#include "StartPathSignatureDelegate.h"
#include "PFPathFollowerComponent.generated.h"

class AActor;
class UEventPointDelegateHolder;
class UPFPathComponent;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATHFOLLOW_API UPFPathFollowerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReachedEndSignature OnReachedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReachedStartSignature OnReachedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartPathSignature OnStartPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FinalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FinalRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> PathOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePathInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TimeBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePathSpeedPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPFFactorOperation SpeedFactorOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFSpeedCurve _speedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _SpeedCurveCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat _InterpSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEasingType EasingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPFLoopType LoopType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAtPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertRotationOnReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAhead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeRollOnDrive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePathPitchAndYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRecompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepRelativeDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationPointSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GenerateOnSplineControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollSampleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampGeneratedAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAnglesClampMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollAnglesClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPFRollInterpType RollIntepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPFFactorOperation RotationFactorOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationMaskLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector RotationUpdateMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector LocationUpdateMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFPathRoller _PathRoller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtEvenIfNotStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignToPathStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDistanceOnPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePathEventPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFEventPoints EventPoints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USplineComponent> SplineToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _pathDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _currSplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle _DelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _lastTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _LastPassedEventIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFollowerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MaxFollowerSpeedSet;
    
public:
    UPFPathFollowerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAutoRotationPoints();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartImpl();
    
public:
    UFUNCTION(BlueprintCallable)
    void Start(float NewStartDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetPathToFollow(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable)
    void SetPathOwner(AActor* NewPathOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFollowerSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void Reverse(bool NewReverse);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator ModifyFinalRotation(const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ModifyFinalLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedAtSpeedPoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedAtDistance(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const;
    
    UFUNCTION(BlueprintCallable)
    UPFPathComponent* GetPathToFollow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPathOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const;
    
    UFUNCTION(BlueprintCallable)
    FPFEventPoints GetEventPoints();
    
    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateByName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UEventPointDelegateHolder* GetEventPointDelegateAll();
    
    UFUNCTION(BlueprintCallable)
    FEventPoint GetEventPointByName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void FollowPath(float FollowStep);
    
    UFUNCTION(BlueprintCallable)
    bool EventPointExistByName(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator ComputeLookAtRotation(USceneComponent* TargetComponent, const FVector& FollowerLocation);
    
    UFUNCTION(BlueprintCallable)
    void ComputeAutoRotationPoints();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxFollowerSpeed();
    
};

