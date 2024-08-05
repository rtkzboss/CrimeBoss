#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SprocketOrWheel.h"
#include "IGS_ContinuousTrackComponent.generated.h"

class UInstancedStaticMeshComponent;
class UPoseableMeshComponent;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_ContinuousTrackComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SK_BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SM_TrackPieceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* SK_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* SM_TrackPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackPieceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprocketToTrackMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprocketOrWheel> SprocketsAndWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOscillateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OscillateCurveCV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OscillateEvery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationScale;
    
    UIGS_ContinuousTrackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDriveSprocketAngle(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriveSprocketAngleAtDistance(float SprocketRadius, float Distance);
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateSplineCurve();
    
    UFUNCTION(BlueprintCallable)
    void CreateContinuousTrack();
    
};

