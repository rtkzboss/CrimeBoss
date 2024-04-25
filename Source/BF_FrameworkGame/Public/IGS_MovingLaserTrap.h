#pragma once
#include "CoreMinimal.h"
#include "IGS_TickingLaserTrap.h"
#include "IGS_MovingLaserTrap.generated.h"

class UArrowComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_MovingLaserTrap : public AIGS_TickingLaserTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ExtraRootObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RootObjectEnd;
    
public:
    AIGS_MovingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TickTimelineUpdate(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void TickTimelineFinished();
    
};

