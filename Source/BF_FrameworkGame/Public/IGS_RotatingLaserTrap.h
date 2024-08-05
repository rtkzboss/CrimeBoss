#pragma once
#include "CoreMinimal.h"
#include "IGS_TickingLaserTrap.h"
#include "IGS_RotatingLaserTrap.generated.h"

class UArrowComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_RotatingLaserTrap : public AIGS_TickingLaserTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ExtraRootObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RotationStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RotationEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Looping;
    
public:
    AIGS_RotatingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TickTimelineUpdate(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void TickTimelineFinished();
    
};

