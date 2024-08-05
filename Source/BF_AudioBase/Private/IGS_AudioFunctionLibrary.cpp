#include "IGS_AudioFunctionLibrary.h"

UIGS_AudioFunctionLibrary::UIGS_AudioFunctionLibrary() {
}

AIGS_GameCharacterFramework* UIGS_AudioFunctionLibrary::ResolveGameCharacterFromSkeletalMesh(USkeletalMeshComponent* inSkeletalMeshComponent) {
    return NULL;
}

UIGS_PersistentAkComponent* UIGS_AudioFunctionLibrary::GetPersistentAkComponent(const UObject* inWCO) {
    return NULL;
}

EIGS_AkEnvironmentSpace UIGS_AudioFunctionLibrary::GetAkEnviroment(AActor* inActor) {
    return EIGS_AkEnvironmentSpace::Indoors;
}


