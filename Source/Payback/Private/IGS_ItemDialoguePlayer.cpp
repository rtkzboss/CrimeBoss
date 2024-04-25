#include "IGS_ItemDialoguePlayer.h"
#include "AkComponent.h"
#include "IGS_NetworkComponentDialogue.h"

AIGS_ItemDialoguePlayer::AIGS_ItemDialoguePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->bIsFPP = false;
    this->NetworkDialogue = CreateDefaultSubobject<UIGS_NetworkComponentDialogue>(TEXT("NetworkComponentDialogue"));
    this->FPPAkSwitch = NULL;
    this->AkComponent = (UAkComponent*)RootComponent;
}


