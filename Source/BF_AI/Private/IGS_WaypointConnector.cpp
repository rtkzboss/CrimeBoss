#include "IGS_WaypointConnector.h"
#include "IGS_CustomBoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_WaypointConnector::AIGS_WaypointConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).BoxComponent = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BoxComponent"));
    (*this).RootComponent = (USceneComponent*)Root;
    (*this).BoxComponent->SetupAttachment((*this).Root);
}


