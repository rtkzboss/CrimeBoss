#include "IGS_Zipline.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "IGS_ZiplineInteractiveComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Zipline::AIGS_Zipline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ZiplineInteractiveComponent = CreateDefaultSubobject<UIGS_ZiplineInteractiveComponent>(TEXT("ZiplineInteractiveComponent"));
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    (*this).ZiplineInteractiveComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_Zipline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Zipline, User);
}


