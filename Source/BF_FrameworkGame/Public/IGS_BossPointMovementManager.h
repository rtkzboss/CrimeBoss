#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnSplineCompletedEventDelegate.h"
#include "IGS_BossPointMovementManager.generated.h"

class AIGS_PlayerCharacter;
class UIGS_PlayerCharacterMovementComponent;
class USplineComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BossPointMovementManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* MovingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCharacterMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnSplineCompletedEvent OnSplineCompletedEvent;
    
    AIGS_BossPointMovementManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResumeMoving();
    
    UFUNCTION(BlueprintCallable)
    void PauseMoving();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithPlayer(AIGS_PlayerCharacter* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AbortMoving();
    
};

