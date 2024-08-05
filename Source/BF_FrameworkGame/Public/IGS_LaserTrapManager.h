#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LaserTrapTriggeredEventDelegate.h"
#include "IGS_LaserTrapManager.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LaserTrapManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LaserTrapTriggeredEvent OnLaserTriggeredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStimuliForAI;
    
public:
    AIGS_LaserTrapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLasersEnabled(bool inState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaserTriggered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLaserState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStimuliForAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeleteObstacle() const;
    
};

