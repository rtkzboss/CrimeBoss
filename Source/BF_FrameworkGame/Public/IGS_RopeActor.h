#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_RopeType.h"
#include "IGS_RopeActor.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_RopeComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_RopeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_RopeComponent* RopeComponent;
    
    AIGS_RopeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void UnLockEndParticle();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ThrowRope();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetUser(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetParameters(EIGS_RopeType inRopeType, FRotator InRotation, FVector inStart, FVector inEnd);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetEnableUpdateClimbDownPoints();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RopeEndTransition(bool OptimizeRope);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RollOffRope();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayerStopUsingRope(bool NewRollOffRope, bool DestroyAfterUse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayerStartUsingRope(AIGS_GameCharacterFramework* inUser, EIGS_RopeType inRopeType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AllowEndPointMove();
    
};

