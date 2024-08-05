#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_SimpleShooter.h"
#include "Templates/SubclassOf.h"
#include "IGS_SimpleHitScanShooter.generated.h"

class UDamageType;
class UIGS_ImpactTypeObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SimpleHitScanShooter : public UIGS_SimpleShooter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ShotImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactAILoudness;
    
public:
    UIGS_SimpleHitScanShooter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_HandleMiss(const FTransform& inShotTransform, const FHitResult& inFinalHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_HandleHitResults(const FTransform& inShotTransform, const TArray<FHitResult>& inPenetrations, const FHitResult& inFinalHit);
    
};

