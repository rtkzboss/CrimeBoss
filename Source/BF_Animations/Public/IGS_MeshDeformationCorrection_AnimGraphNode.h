#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "IGS_MeshDeformationBoneAlphaInfo.h"
#include "IGS_MeshDeformationBoneInfo.h"
#include "IGS_MeshDeformationCorrection_AnimGraphNode.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_MeshDeformationCorrection_AnimGraphNode : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_MeshDeformationBoneInfo> CorrectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MeshDeformationBoneAlphaInfo Alphas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseExposedAlpha;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_CharacterMesh;
    
public:
    FIGS_MeshDeformationCorrection_AnimGraphNode();
};

