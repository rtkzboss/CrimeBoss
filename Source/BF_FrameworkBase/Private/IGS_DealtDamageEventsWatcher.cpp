#include "IGS_DealtDamageEventsWatcher.h"
#include "ComponentInstanceDataCache.h"

UIGS_DealtDamageEventsWatcher::UIGS_DealtDamageEventsWatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).HeadshotMaterial = nullptr;
}


