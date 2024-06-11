#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Engine/Scene.h"
#include "IGS_VolumeBase.h"
#include "IGS_PostProcessVolumeBase.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PostProcessVolumeBase : public AIGS_VolumeBase, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BlendableMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnbound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
public:
    AIGS_PostProcessVolumeBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius/*=0.f*/, float* OutDistanceToPoint) override { return false; }
    virtual FPostProcessVolumeProperties GetProperties() const override { return {}; }
};

