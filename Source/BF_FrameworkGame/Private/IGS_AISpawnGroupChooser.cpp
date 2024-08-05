#include "IGS_AISpawnGroupChooser.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_AISpawnGroupChooser::AIGS_AISpawnGroupChooser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AutomaticStart = true;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).EasyAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).MediumAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("LowerBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*TBaseStructure<FInt32RangeBound>::Get()->FindPropertyByName("Type")->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type>>(&(*TBaseStructure<FInt32Range>::Get()->FindPropertyByName("UpperBound")->ContainerPtrToValuePtr<FInt32RangeBound>(&(*this).HardAmount, 0)), 0)) = ERangeBoundTypes::Inclusive;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

void AIGS_AISpawnGroupChooser::SpawnGroup() {
}


