#include "IGS_PingableWidgetActor.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_WorldSpaceWidgetBase.h"

AIGS_PingableWidgetActor::AIGS_PingableWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PingDuration = 5.000000000e+00f;
    (*this).NetworkDormantTimer = 5.000000000e+00f;
    (*this).PingWidget = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Ping Widget"));
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)PingWidget;
}

void AIGS_PingableWidgetActor::Multicast_ShowPingWidget_Implementation(float inPingDuration) {
}

void AIGS_PingableWidgetActor::Multicast_Release_Implementation() {
}


