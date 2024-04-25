#include "IGS_DangerManagerLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_DangerManagerLibrary::UIGS_DangerManagerLibrary() {
}

void UIGS_DangerManagerLibrary::UnregisterCharacterFromDangerSystem(AIGS_GameCharacterFramework* Character) {
}

void UIGS_DangerManagerLibrary::RegisterCharacterToDangerSystem(AIGS_GameCharacterFramework* Character, float DangerRadius, const TArray<TSubclassOf<UIGS_DamageTypeBase>>& DamageTypesToFear) {
}

void UIGS_DangerManagerLibrary::CreateTemporaryDangerArea(UObject* WCO, const FVector& Location, float DangerRadius, const TSubclassOf<UIGS_DamageTypeBase>& DamageType, float Duration) {
}


