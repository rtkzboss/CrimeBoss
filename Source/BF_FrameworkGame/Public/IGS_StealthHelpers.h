#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_StealthHelpers.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_SuspicionEventActor;
class AIGS_ThrowableProjectileBase;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_StealthHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_StealthHelpers();

    UFUNCTION(BlueprintCallable)
    static void WholeMissionIsTresspassing(UObject* inWCO, bool securityArea);
    
    UFUNCTION(BlueprintCallable)
    static void TresspassingAllowed(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static void ReportVaultOpeningStart(AActor* inVaultActor, FVector inLobyPosition);
    
    UFUNCTION(BlueprintCallable)
    static void ReportVaultOpeningEnd(AActor* inVaultActor, bool inSuccesfullyOpen);
    
    UFUNCTION(BlueprintCallable)
    static void ReportUnarmedMelee(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportThrow(AIGS_GameCharacterFramework* inInstigator, AIGS_ThrowableProjectileBase* inProjectile);
    
    UFUNCTION(BlueprintCallable)
    static void ReportSusOpenedStart(AActor* inObject, AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportSusOpenedEnd(AActor* inObject);
    
    UFUNCTION(BlueprintCallable)
    static AIGS_SuspicionEventActor* ReportSusGlider(AActor* inGlider);
    
    UFUNCTION(BlueprintCallable)
    static void ReportSubdue(AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget);
    
    UFUNCTION(BlueprintCallable)
    static void ReportPhotoCameraStart(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportPhotoCameraEnd(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportMelee(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportLootingStarts(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ReportLootingEnd(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ReportLockpickStarts(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ReportLockpickEnd(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void ReportCameraJammerStart(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportCameraJammerEnd(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportBash(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void ReportAlarmSirens(UObject* inWCO, FVector InLocation, float inLoudness);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTrespassing(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void CreateLockpickedEvents(UObject* inWCO, FVector InLocation, AActor* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBrokenEventsTwoSided(UObject* inWCO, FVector InLocation, FVector inForward, AActor* inInstigator, bool inIsImportant);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBrokenEvents(UObject* inWCO, FVector InLocation, AActor* inInstigator, bool inIsImportant, float inLoudness);
    
};

