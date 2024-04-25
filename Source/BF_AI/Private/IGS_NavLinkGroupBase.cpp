#include "IGS_NavLinkGroupBase.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

ADEPRECATED_IGS_NavLinkGroupBase::ADEPRECATED_IGS_NavLinkGroupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    this->NavLinkCount = 1;
    this->LinksDistance = 1.00f;
    this->Cooldown = 0.00f;
    this->LinkDirection = ENavLinkDirection::BothWays;
    this->CommonAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->LeftAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->LeftAnimationAsset = NULL;
    this->RightAnimation = EIGS_SmartLinkAnimVariant::AIM_None;
    this->RightAnimationAsset = NULL;
    this->GroupRootComponent = (USceneComponent*)RootComponent;
    this->FrontBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("FrontBreachingPoints"));
    this->BackBreachingPoints = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackBreachingPoints"));
    this->helpersBox = CreateDefaultSubobject<UBoxComponent>(TEXT("helpersBox"));
    this->FrontBreachingPoints->SetupAttachment(RootComponent);
    this->BackBreachingPoints->SetupAttachment(RootComponent);
    this->helpersBox->SetupAttachment(RootComponent);
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetEnableArea(TSubclassOf<UNavArea> NavArea) {
}

void ADEPRECATED_IGS_NavLinkGroupBase::SetDisableArea(TSubclassOf<UNavArea> NavArea) {
}


