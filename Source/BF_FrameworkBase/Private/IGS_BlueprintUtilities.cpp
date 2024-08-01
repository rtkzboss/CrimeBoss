#include "IGS_BlueprintUtilities.h"
#include "Kismet\GameplayStatics.h"

UIGS_BlueprintUtilities::UIGS_BlueprintUtilities() {
}

void UIGS_BlueprintUtilities::WaitForStreamingFinished(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

TArray<EIGS_TeamSideEnum> UIGS_BlueprintUtilities::TeamSidesMaskToArray(int32 inValidTeamSides) {
    return TArray<EIGS_TeamSideEnum>();
}

void UIGS_BlueprintUtilities::SetPlayerInputForInteraction(bool inEnabled, APlayerController* InController) {
}

void UIGS_BlueprintUtilities::PataFix(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo) {
}

void UIGS_BlueprintUtilities::IsValidClass(UClass* inClass, EValidNotValidExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::IsServerOrStandalone(UObject* inWCO, EBoolExecPin& outBranches) {
}

bool UIGS_BlueprintUtilities::IsLocallyControlledPlayerPawn(const APawn* inPawn) {
    return false;
}

void UIGS_BlueprintUtilities::IsinEditor(UObject* inWCO, EBoolExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::IsEditorBuild(EBoolExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::IsDedicatedServer(EBoolExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId) {
}

APlayerController* UIGS_BlueprintUtilities::GetLocalPlayerControllerForWorld(UObject* inWCO) {
    return UGameplayStatics::GetPlayerController(inWCO->GetWorld(), 0);
}

APlayerController* UIGS_BlueprintUtilities::GetLocalPlayerController(UObject* inWCO) {
    return NULL;
}

FColor UIGS_BlueprintUtilities::GetColorForTeamSide(EIGS_TeamSideEnum inTeamSide) {
    return FColor{};
}

void UIGS_BlueprintUtilities::GetBuildConfiguration(EBuildConfigurationExecPin& outBranches) {
}

void UIGS_BlueprintUtilities::Array_Shuffle_RandomStream(const TArray<int32>& TargetArray, const FRandomStream& inRandomStream) {
}


