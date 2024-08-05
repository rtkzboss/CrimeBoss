#include "IGS_InteractionListener.h"
#include "ComponentInstanceDataCache.h"

UIGS_InteractionListener::UIGS_InteractionListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


