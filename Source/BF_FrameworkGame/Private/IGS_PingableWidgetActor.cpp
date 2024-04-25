#include "IGS_PingableWidgetActor.h"
#include "IGS_WorldSpaceWidgetBase.h"

AIGS_PingableWidgetActor::AIGS_PingableWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UIGS_WorldSpaceWidgetBase>(TEXT("Ping Widget"));
    this->PingDuration = 5.00f;
    this->NetworkDormantTimer = 5.00f;
    this->PingWidget = (UIGS_WorldSpaceWidgetBase*)RootComponent;
}

void AIGS_PingableWidgetActor::Multicast_ShowPingWidget_Implementation(float inPingDuration) {
}

void AIGS_PingableWidgetActor::Multicast_Release_Implementation() {
}


