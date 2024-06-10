#include "IGS_EntitlementItemsSaveData.h"

FIGS_EntitlementItemsSaveData::FIGS_EntitlementItemsSaveData() {
    auto& gen2337 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).IDs, 0));
    gen2337.Empty();
    auto& gen2338 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).IDs, 0));
    gen2338.Empty();
}

