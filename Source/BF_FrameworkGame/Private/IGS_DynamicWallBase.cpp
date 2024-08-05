#include "IGS_DynamicWallBase.h"
#include "IGS_CoverPointBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_DynamicWallBase::AIGS_DynamicWallBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WallRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
    (*this).WallTopTrimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopTrimMesh"));
    (*this).WallBottomTrimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomTrimMesh"));
    (*this).WallLeftCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallLeftCornerMesh"));
    (*this).WallRightCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallRightCornerMesh"));
    (*this).WallTopLeftTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopLeftTrimCornerMesh"));
    (*this).WallBottomLeftTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomLeftTrimCornerMesh"));
    (*this).WallTopRightTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopRightTrimCornerMesh"));
    (*this).WallBottomRightTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomRightTrimCornerMesh"));
    (*this).CoverPointClass = AIGS_CoverPointBase::StaticClass();
    (*this).RootComponent = (USceneComponent*)WallRootComponent;
    (*this).WallMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallTopTrimMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallBottomTrimMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallLeftCornerMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallRightCornerMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallTopLeftTrimCornerMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallBottomLeftTrimCornerMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallTopRightTrimCornerMesh->SetupAttachment((*this).WallRootComponent);
    (*this).WallBottomRightTrimCornerMesh->SetupAttachment((*this).WallRootComponent);
}

void AIGS_DynamicWallBase::OnGenerationFinished(ANavigationData* inNavData) {
}

bool AIGS_DynamicWallBase::IsBreachable() const {
    return false;
}

void AIGS_DynamicWallBase::ApplyMaterials() {
}


