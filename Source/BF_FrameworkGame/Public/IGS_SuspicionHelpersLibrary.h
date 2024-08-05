#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "IGS_SuspicionHelpersLibrary.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SuspicionEventActor;
class UIGS_PlayerSuspicionComponent;
class UIGS_SuspicionComponent;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SuspicionHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_SuspicionHelpersLibrary();

    UFUNCTION(BlueprintCallable)
    static void TriggerBotLimbo(const UObject* inWCO, bool inPlayVioceovers);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttachedToComp(const UObject* inWCO, USceneComponent* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAttached(const UObject* inWCO, AActor* inAttachTo, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActorAdvanced(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* SpawnSuspicionEventActor(const UObject* inWCO, const FTransform& InTransform, AIGS_GameCharacterFramework* inCauser, const FGameplayTagContainer& inOffences, const TArray<AIGS_GameCharacterFramework*>& inIgnoredBy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDetectSusComp(UIGS_SuspicionComponent* inSusComp, AActor* inDetector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldDetectOffender(AActor* inOffender, AActor* inDetector);
    
    UFUNCTION(BlueprintCallable)
    static void MakeExplosionNoiseAndEvent(const AActor* inSource, AIGS_GameCharacterFramework* inInstigator, const float inLoudness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetOffenceBasedDetectionMultiplier(UIGS_PlayerSuspicionComponent* inOffender, AActor* inDetector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAttributeBasedDetectionMultiplier(AIGS_GameCharacterFramework* inOffender);
    
};

