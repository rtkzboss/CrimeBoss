#include "IGS_ImpactFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_ImpactFunctionLibrary::UIGS_ImpactFunctionLibrary() {
}

void UIGS_ImpactFunctionLibrary::CreateImpactDecal(const UObject* inWCO, FHitResult inHitResult, TEnumAsByte<EPhysicalSurface> inSurfaceType, TSubclassOf<UIGS_ImpactTypeObject> inImpactID, FGameplayTag inGameplayTag) {
}

void UIGS_ImpactFunctionLibrary::CreateImpact(const UObject* inWCO, EIGS_ImpactTable inImpactTable, TEnumAsByte<EPhysicalSurface> inPhysicalSurface, EIGS_ImpactType inImpactType, const FIGS_ImpactParameters& inParameters) {
}

void UIGS_ImpactFunctionLibrary::CreateHitImpact(const UObject* inWCO, const AActor* InstigatorActor, const UPrimitiveComponent* InstigatorComponent, const UPrimitiveComponent* TargetComponent, const FHitResult& Hit, const FIGS_ImpactHitParameter& Param) {
}

void UIGS_ImpactFunctionLibrary::CreateAllImpacts(const UObject* inWCO, EIGS_ImpactTable inImpactTable, TEnumAsByte<EPhysicalSurface> inPhysicalSurface, const FIGS_ImpactParameters& inParameters) {
}


