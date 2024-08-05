#include "SkinnedDecalInstance.h"
#include "ComponentInstanceDataCache.h"

USkinnedDecalInstance::USkinnedDecalInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Size = 1.000000000e+01f;
}

void USkinnedDecalInstance::UpdateDecal() {
}

USkinnedDecalSampler* USkinnedDecalInstance::GetSampler() {
    return NULL;
}


