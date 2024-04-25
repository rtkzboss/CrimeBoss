#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_AkEnvironmentSpace.h"
#include "IGS_AudioFunctionLibrary.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_PersistentAkComponent;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BF_AUDIOBASE_API UIGS_AudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_AudioFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static AIGS_GameCharacterFramework* ResolveGameCharacterFromSkeletalMesh(USkeletalMeshComponent* inSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_PersistentAkComponent* GetPersistentAkComponent(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static EIGS_AkEnvironmentSpace GetAkEnviroment(AActor* inActor);
    
};

