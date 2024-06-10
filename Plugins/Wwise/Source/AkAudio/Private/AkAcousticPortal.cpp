#include "AkAcousticPortal.h"
#include "Engine/Brush.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AkPortalComponent.h"

AAkAcousticPortal::AAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Portal = CreateDefaultSubobject<UAkPortalComponent>(TEXT("PortalComponent"));
    (*this).InitialState = AkAcousticPortalState::Open;
    (*this).BrushColor.B = 137;
    (*this).BrushColor.G = 196;
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).PrimaryActorTick.TickGroup = TG_DuringPhysics;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.bAllowTickOnDedicatedServer = false;
    (*this).Portal->SetupAttachment((*this).RootComponent);
}

void AAkAcousticPortal::OpenPortal() {
}

AkAcousticPortalState AAkAcousticPortal::GetCurrentState() const {
    return AkAcousticPortalState::Closed;
}

void AAkAcousticPortal::ClosePortal() {
}


