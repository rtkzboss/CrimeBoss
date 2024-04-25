#include "IGS_WaypointConnector.h"
#include "IGS_CustomBoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_WaypointConnector::AIGS_WaypointConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->NextPoint = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->BoxComponent = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent->SetupAttachment(RootComponent);
}


