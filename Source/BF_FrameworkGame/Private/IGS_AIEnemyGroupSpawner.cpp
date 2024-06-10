#include "IGS_AIEnemyGroupSpawner.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_AISpawnerData.h"

AIGS_AIEnemyGroupSpawner::AIGS_AIEnemyGroupSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).AllowedSpecialTypes = 157;
    (*this).IsActive = true;
    (*this).AutomaticStart = true;
    (*this).AutomaticStartDelay = 2.000000030e-01f;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Open;
    (*this).CoolDownTime = 4.000000000e+00f;
    static ConstructorHelpers::FObjectFinder<UIGS_AISpawnerData> gen564(TEXT("/Game/00_Main/Core/AI/Spawning/DA_AISpawnerData.DA_AISpawnerData"));
    (*this).AISpawnerData = gen564.Object;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrizedWithSpecializations(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation, const TArray<EIGS_UnitSpecialization>& inUnitSpecializations) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroupParametrized(EIGS_TeamSideEnum inTeamSide, uint8 inUnitVariation) {
}

void AIGS_AIEnemyGroupSpawner::SpawnGroup() {
}

void AIGS_AIEnemyGroupSpawner::OverwriteSpawnAmount(const int32 inEasyMin, const int32 inEasyMax, const int32 inMediumMin, const int32 inMediumMax, const int32 inHardMin, const int32 inHardMax) {
}


