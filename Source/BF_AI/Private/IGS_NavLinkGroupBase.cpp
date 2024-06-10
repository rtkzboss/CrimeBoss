#include "IGS_NavLinkGroupBase.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

ADEPRECATED_IGS_NavLinkGroupBase::ADEPRECATED_IGS_NavLinkGroupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NavLinkCount = 1;
    (*this).LinksDistance = 1.000000000e+00f;
    (*this).Left.X = -1.000000000e+02f;
    (*this).Right.X = 1.000000000e+02f;
    (*this).GroupRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    (*this).FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    (*this).BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    (*this).helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    (*this).RootComponent = (USceneComponent*)GroupRootComponent;
    (*this).FrontBreachingPoints->SetupAttachment((*this).GroupRootComponent);
    (*this).BackBreachingPoints->SetupAttachment((*this).GroupRootComponent);
    (*this).helpersBox->SetupAttachment((*this).GroupRootComponent);
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetEnableArea(TSubclassOf<UNavArea> NavArea) {
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetDisableArea(TSubclassOf<UNavArea> NavArea) {
}


