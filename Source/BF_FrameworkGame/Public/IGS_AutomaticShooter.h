#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_AutomaticShooter.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AutomaticShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShootStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShootStopAudioEvent;
    
public:
    UIGS_AutomaticShooter(const FObjectInitializer& ObjectInitializer);

};

