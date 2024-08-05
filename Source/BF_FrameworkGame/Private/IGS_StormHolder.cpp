#include "IGS_StormHolder.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"

FIGS_StormHolder::FIGS_StormHolder() {
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<int32>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = 3;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<int32>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).WaveSize, 0)), 0)) = 5;
    (*TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FFloatRange>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<float>(&(*TBaseStructure<FFloatRange>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = 1.500000000e+01f;
    (*TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FFloatRange>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FFloatRangeBound>::Get()->FindPropertyByName("Value")->ContainerPtrToValuePtr<float>(&(*TBaseStructure<FFloatRange>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FFloatRangeBound>(&(*this).WaveSpawnTimer, 0)), 0)) = 1.500000000e+01f;
    (*this).SquadSize = 4;
    (*this).EnemyTypes = 0;
}

