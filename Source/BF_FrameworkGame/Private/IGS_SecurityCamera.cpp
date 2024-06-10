#include "IGS_SecurityCamera.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_WalkieTalkieStatus.h"
#include "EIGS_DetectorState.h"
#include "EIGS_RotationType.h"

AIGS_SecurityCamera::AIGS_SecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_SecurityCamera::OnWireCut(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_SecurityCamera::Multicast_CosmeticWireCut_Implementation() {
}



