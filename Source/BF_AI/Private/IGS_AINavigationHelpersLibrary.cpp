#include "IGS_AINavigationHelpersLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_AINavigationHelpersLibrary::UIGS_AINavigationHelpersLibrary() {
}

void UIGS_AINavigationHelpersLibrary::UpdateNavigationData(UActorComponent* comp) {
}

bool UIGS_AINavigationHelpersLibrary::ProjectPointToNavigation(const UObject* inWCO, const FVector& inPoint, FVector& OutLocation, const FVector inQueryExtent, const bool inFilterFromWco, TSubclassOf<UNavigationQueryFilter> inFilterClass) {
    return false;
}

bool UIGS_AINavigationHelpersLibrary::IsInDangerArea(const UObject* inWCO, const FVector InLocation, const float InRadius, const bool inAddCapsuleRadiusIfCharacterWco) {
    return false;
}

void UIGS_AINavigationHelpersLibrary::ForceEnableForNavigation(UStaticMeshComponent* comp) {
}

void UIGS_AINavigationHelpersLibrary::AffectNavigation(UStaticMeshComponent* comp, bool Value) {
}

void UIGS_AINavigationHelpersLibrary::AddRoomConnection(AIGS_RoomBase* roomOne, AIGS_RoomBase* roomTwo) {
}


