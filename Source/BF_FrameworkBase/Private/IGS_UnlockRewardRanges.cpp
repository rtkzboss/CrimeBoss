#include "IGS_UnlockRewardRanges.h"
#include "UObject/NoExportTypes.h"

FIGS_UnlockRewardRanges::FIGS_UnlockRewardRanges() {
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<int32>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = 1;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<int32>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).LevelRange, 0)), 0)) = 1;
    auto& gen2099 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AvailableItems, 0));
    gen2099.Empty();
    auto& gen2100 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).AvailableItems, 0));
    gen2100.Empty();
    auto& gen2101 = (*this).ForcedPool;
    gen2101.Empty();
}

