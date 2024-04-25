#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointFramework.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_WaypointEventSignatureDelegate.h"
#include "IGS_WaypointBase.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_WaypointBase : public AIGS_WaypointFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EQSFilteringTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StoppingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApproachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExactPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FiltersByTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum ValidForEnemySide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValidTeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ScenarioDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDifficultyLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnVisitedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnApproachedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnArrivedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WaypointEventSignature OnLeftEvent;
    
public:
    AIGS_WaypointBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Visit(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDebugSubsystemSettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMoveCommandFinished(AIGS_AIControllerGame* inOwningController, UIGS_AICommand* inCommand, bool inFailed);
    
    UFUNCTION(BlueprintCallable)
    void Leave(AIGS_GameCharacterFramework* inCharacter, bool inIsAbort);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidForTeamSideMask(int32 inTeamsideMask);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidForTeamSide(EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStoppingDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExactPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetApproachDistance() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanVisit(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Arrive(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Approach(AIGS_GameCharacterFramework* inCharacter);
    
};

