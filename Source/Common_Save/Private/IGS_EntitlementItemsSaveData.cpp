#include "IGS_EntitlementItemsSaveData.h"

FIGS_EntitlementItemsSaveData::FIGS_EntitlementItemsSaveData() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).IDs, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).IDs, 0)).Empty();
}

