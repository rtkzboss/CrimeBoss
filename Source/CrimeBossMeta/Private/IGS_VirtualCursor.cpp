#include "IGS_VirtualCursor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_VirtualCursor::AIGS_VirtualCursor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryActorTick.bCanEverTick = true;
}

bool AIGS_VirtualCursor::IsSupportedScreenOpen(UIGS_GameScreenHandler* inGameScreenHandler) const {
    return false;
}

TScriptInterface<IVirtualCursorTarget> AIGS_VirtualCursor::GetClosestTargetInDirection(FVector InDirection, const TArray<AActor*>& inActors) {
    return NULL;
}

TScriptInterface<IVirtualCursorTarget> AIGS_VirtualCursor::GetClosestOverlappedTarget() {
    return NULL;
}


