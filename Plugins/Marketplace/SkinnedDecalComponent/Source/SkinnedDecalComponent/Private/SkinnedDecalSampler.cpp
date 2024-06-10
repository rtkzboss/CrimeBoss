#include "SkinnedDecalSampler.h"
#include "ComponentInstanceDataCache.h"
#include "Materials/Material.h"

USkinnedDecalSampler::USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LayerIndex = -1;
    (*this).Association = GlobalParameter;
    (*this).AdditionalData = SpawnTime;
    (*this).LastDecalIndex = -1;
    (*this).MaxDecals = 100;
    (*this).MinDecalDistance = 1.000000000e+01f;
    (*this).TranslucentBlend = true;
    static ConstructorHelpers::FObjectFinder<UMaterial> gen203(TEXT("/SkinnedDecalComponent/SkinnedDecalTranslucentBlendMat.SkinnedDecalTranslucentBlendMat"));
    (*this).TranslucentBlendMaterial = gen203.Object;
}

void USkinnedDecalSampler::UpdateInstance(USkinnedDecalInstance* Instance) {
}

void USkinnedDecalSampler::UpdateAllDecals() {
}

int32 USkinnedDecalSampler::SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float Size, int32 SubUV, int32 Index) {
    return 0;
}

void USkinnedDecalSampler::SetupMaterials() {
}

void USkinnedDecalSampler::SetupComponentMaterials(USkeletalMeshComponent* Component) {
}

void USkinnedDecalSampler::SetMeshComponent(USkeletalMeshComponent* MeshComponent, bool Child) {
}

void USkinnedDecalSampler::RemoveDecal(const int32 Index) {
}

UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget() {
    return NULL;
}

void USkinnedDecalSampler::CloneDecals(USkinnedDecalSampler* Source) {
}

void USkinnedDecalSampler::ClearAllDecals() {
}

void USkinnedDecalSampler::AutoSetup() {
}


