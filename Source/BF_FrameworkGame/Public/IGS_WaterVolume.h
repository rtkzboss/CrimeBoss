#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "GameFramework/PhysicsVolume.h"
#include "Engine/Scene.h"
#include "EWaterType.h"
#include "IGS_WaterVolume.generated.h"

class AActor;
class UAudioComponent;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_WaterVolume : public APhysicsVolume, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWaterType::Type> WaterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* UnderWaterLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_AudioComponent;
    
public:
    AIGS_WaterVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    

    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) PURE_VIRTUAL(EncompassesPoint,return false;);
    virtual FPostProcessVolumeProperties GetProperties() const PURE_VIRTUAL(GetProperties,return {};);
};

