#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "IGS_CoverSystem.generated.h"

class AController;
class UCoverPoint;

UCLASS(Blueprintable)
class BF_COVERS_API UIGS_CoverSystem : public UObject {
    GENERATED_BODY()
public:
    UIGS_CoverSystem();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo=LatentInfo, WorldContext=WorldContextObject))
    static void WaitAndValidateCovers(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void ReleaseCover(UCoverPoint* inCoverPoint, UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ReachedCover(UCoverPoint* inCoverPoint, AController* InController);
    
    UFUNCTION(BlueprintCallable)
    static bool OccupyCover(UCoverPoint* inCoverPoint, AController* InController);
    
};

