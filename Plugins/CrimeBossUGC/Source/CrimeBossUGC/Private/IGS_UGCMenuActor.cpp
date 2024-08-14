#include "IGS_UGCMenuActor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_UGCBaseGameInstance.h"

AIGS_UGCMenuActor::AIGS_UGCMenuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

void AIGS_UGCMenuActor::BeginPlay()
{
	Super::BeginPlay();
	if (auto GameInstance = Cast<UIGS_UGCBaseGameInstance>(GetGameInstance()))
	{
		GameInstance->OnStarterMapInitialized();
	}
}
