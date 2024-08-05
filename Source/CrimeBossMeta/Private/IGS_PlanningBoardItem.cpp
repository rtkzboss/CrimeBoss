#include "IGS_PlanningBoardItem.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_PlanningBoardItem::AIGS_PlanningBoardItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collider"));
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).StaticMeshComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_PlanningBoardItem::SetStatus(EMETA_PlanningBoardItemStatus NewStatus) {
}

void AIGS_PlanningBoardItem::SetItemData(const FMETA_PlanningBoardItemRow& inItemData) {
}


float AIGS_PlanningBoardItem::GetZoomOffset() const {
    return 0.0f;
}

FGameplayTag AIGS_PlanningBoardItem::GetId() const {
    return FGameplayTag{};
}

TArray<FMETA_PlanningBoardItemConnectionData> AIGS_PlanningBoardItem::GetConnections() const {
    return TArray<FMETA_PlanningBoardItemConnectionData>();
}


