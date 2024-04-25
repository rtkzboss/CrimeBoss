#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EIGS_TeamSideEnum.h"
#include "EBoolExecPin.h"
#include "EBuildConfigurationExecPin.h"
#include "EValidNotValidExecPin.h"
#include "IGS_BlueprintUtilities.generated.h"

class APawn;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_BlueprintUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_BlueprintUtilities();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo=LatentInfo, WorldContext=WorldContextObject))
    static void WaitForStreamingFinished(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_TeamSideEnum> TeamSidesMaskToArray(int32 inValidTeamSides);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerInputForInteraction(bool inEnabled, APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo=LatentInfo, WorldContext=WorldContextObject))
    static void PataFix(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void IsValidClass(UClass* inClass, EValidNotValidExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable)
    static void IsServerOrStandalone(UObject* inWCO, EBoolExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocallyControlledPlayerPawn(const APawn* inPawn);
    
    UFUNCTION(BlueprintCallable)
    static void IsinEditor(UObject* inWCO, EBoolExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable)
    static void IsEditorBuild(EBoolExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable)
    static void IsDedicatedServer(EBoolExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* GetLocalPlayerControllerForWorld(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* GetLocalPlayerController(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetColorForTeamSide(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable)
    static void GetBuildConfiguration(EBuildConfigurationExecPin& outBranches);
    
    UFUNCTION(BlueprintCallable)
    static void Array_Shuffle_RandomStream(const TArray<int32>& TargetArray, const FRandomStream& inRandomStream);
    
};

