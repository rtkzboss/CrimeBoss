#pragma once
#include "CoreMinimal.h"
#include "WaterTurretElements.generated.h"

class AIGS_WaterCannon;
class USplineComponent;
class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FWaterTurretElements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WaterCannon* Turret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Hose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> HoseMeshes;
    
    BF_FRAMEWORKGAME_API FWaterTurretElements();
};

