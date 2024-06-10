#include "IGS_SentryControllerPlayerBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SentryControllerPlayerBase::AIGS_SentryControllerPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bUseYaw = true;
}


