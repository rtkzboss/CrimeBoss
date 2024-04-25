#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "EIGS_AkEnvironmentSpace.h"
#include "IGS_SpatialAudioVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_AUDIOBASE_API AIGS_SpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AkEnvironmentSpace AkEnviroSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CopyTransmissionLossToSurfaces;
    
public:
    AIGS_SpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* inOverlappedActor, AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* inOverlappedActor, AActor* inOtherActor);
    
};

