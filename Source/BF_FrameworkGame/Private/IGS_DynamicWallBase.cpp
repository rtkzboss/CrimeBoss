#include "IGS_DynamicWallBase.h"
#include "IGS_CoverPointBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_DynamicWallBase::AIGS_DynamicWallBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WallLength = EIGS_WallLength::Wall_1m;
    this->WallType = EIGS_WallType::Wall_Wall;
    this->WallShape = EIGS_WallShape::Wall_Normal;
    this->bCornerL = false;
    this->bCornerR = false;
    this->bTrimTop = false;
    this->bTrimBottom = false;
    this->bLowerTrim = false;
    this->Error_mesh = NULL;
    this->Wall_1m_mesh = NULL;
    this->Wall_2m_mesh = NULL;
    this->Wall_4m_mesh = NULL;
    this->Wall_half_2m_mesh = NULL;
    this->Wall_half_4m_mesh = NULL;
    this->Wall_shaft_1m_mesh = NULL;
    this->Door_2m_mesh = NULL;
    this->Door_4m_mesh = NULL;
    this->Window_2m_mesh = NULL;
    this->Window_4m_mesh = NULL;
    this->Elevator_4m_mesh = NULL;
    this->Shaft_1m_mesh = NULL;
    this->Shaft_2m_mesh = NULL;
    this->Arch_2m_mesh = NULL;
    this->Arch_4m_mesh = NULL;
    this->Wall_1m_trim_top_mesh = NULL;
    this->Wall_2m_trim_top_mesh = NULL;
    this->Wall_4m_trim_top_mesh = NULL;
    this->Wall_1m_trim_bottom_mesh = NULL;
    this->Wall_2m_trim_bottom_mesh = NULL;
    this->Wall_4m_trim_bottom_mesh = NULL;
    this->Wall_2m_arc_trim_top_mesh = NULL;
    this->Wall_4m_arc_trim_top_mesh = NULL;
    this->Wall_2m_arc_trim_bottom_mesh = NULL;
    this->Wall_4m_arc_trim_bottom_mesh = NULL;
    this->Wall_door_1m_trim_bottom_mesh = NULL;
    this->Wall_door_2m_trim_bottom_mesh = NULL;
    this->Wall_door_4m_trim_bottom_mesh = NULL;
    this->Wall_corner_left_bottom_mesh = NULL;
    this->Wall_corner_right_bottom_mesh = NULL;
    this->Wall_corner_left_top_mesh = NULL;
    this->Wall_corner_right_top_mesh = NULL;
    this->Wall_corner_left_mesh = NULL;
    this->Wall_corner_right_mesh = NULL;
    this->Wall_corner_halfwall_left_mesh = NULL;
    this->Wall_corner_halfwall_right_mesh = NULL;
    this->WallRootComponent = (USceneComponent*)RootComponent;
    this->WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
    this->WallTopTrimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopTrimMesh"));
    this->WallBottomTrimMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomTrimMesh"));
    this->WallLeftCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallLeftCornerMesh"));
    this->WallRightCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallRightCornerMesh"));
    this->WallTopLeftTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopLeftTrimCornerMesh"));
    this->WallBottomLeftTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomLeftTrimCornerMesh"));
    this->WallTopRightTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopRightTrimCornerMesh"));
    this->WallBottomRightTrimCornerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomRightTrimCornerMesh"));
    this->MaterialVariant = 0;
    this->navAreaClass = NULL;
    this->CoverPointClass = AIGS_CoverPointBase::StaticClass();
    this->WallTopLeftTrimCornerMesh->SetupAttachment(RootComponent);
    this->WallBottomLeftTrimCornerMesh->SetupAttachment(RootComponent);
    this->WallTopRightTrimCornerMesh->SetupAttachment(RootComponent);
    this->WallBottomRightTrimCornerMesh->SetupAttachment(RootComponent);
    this->WallMesh->SetupAttachment(RootComponent);
    this->WallTopTrimMesh->SetupAttachment(RootComponent);
    this->WallBottomTrimMesh->SetupAttachment(RootComponent);
    this->WallLeftCornerMesh->SetupAttachment(RootComponent);
    this->WallRightCornerMesh->SetupAttachment(RootComponent);
}

void AIGS_DynamicWallBase::OnGenerationFinished(ANavigationData* inNavData) {
}

bool AIGS_DynamicWallBase::IsBreachable() const {
    return false;
}

void AIGS_DynamicWallBase::ApplyMaterials() {
}


