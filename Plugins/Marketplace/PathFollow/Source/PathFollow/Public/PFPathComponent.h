#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Components/SplineComponent.h"
#include "DrawerData.h"
#include "PFAutoRollVisualConfig.h"
#include "PFEventPoints.h"
#include "PFEventPointsVisualization.h"
#include "PFPathRoller.h"
#include "PFSpeedCurve.h"
#include "PFSpeedPointsDrawConfig.h"
#include "PFPathComponent.generated.h"

class UPFPathFollowerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATHFOLLOW_API UPFPathComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawerData DrawerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFEventPointsVisualization EventPointsVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFEventPoints EventPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFPathRoller _PathRoller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFSpeedCurve _speedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MirrorAroundX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReversePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFAutoRollVisualConfig AutoRollDebugConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPFSpeedPointsDrawConfig SpeedPointDrawConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPFPathFollowerComponent* _FollowerComponent;
    
    UPFPathComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetTimeForPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtSplinePointMirrored(int32 PointIdx, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtSplineInputKeyMirrored(float Key, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistanceAlongSplineMirrored(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
};

