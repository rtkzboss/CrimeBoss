#include "IGS_SentryControllerFramework.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SentryControllerFramework::AIGS_SentryControllerFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GenericId = -1;
}


