#pragma once
#include "CoreMinimal.h"
#include "IGS_MeshDeformationBoneAlphaInfo.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MeshDeformationBoneAlphaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RotationAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LocationAlphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ScaleAlphas;
    
    BF_ANIMATIONS_API FIGS_MeshDeformationBoneAlphaInfo();
};

