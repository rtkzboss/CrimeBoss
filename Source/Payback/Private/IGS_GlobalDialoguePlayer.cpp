#include "IGS_GlobalDialoguePlayer.h"
#include "AkComponent.h"
#include "IGS_NetworkComponentDialogue.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_GlobalDialoguePlayer::AIGS_GlobalDialoguePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).NetworkDialogue = CreateDefaultSubobject<UIGS_NetworkComponentDialogue>(TEXT("NetworkComponentDialogue"));
    (*this).AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)AkComponent;
}


