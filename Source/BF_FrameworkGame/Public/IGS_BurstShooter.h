#pragma once
#include "CoreMinimal.h"
#include "IGS_SemiAutoShooter.h"
#include "IGS_BurstShooter.generated.h"

class UAkAudioEvent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_BurstShooter : public UIGS_SemiAutoShooter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Burst2ShotAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Burst3ShotAudioEvent;
    
public:
    UIGS_BurstShooter(const FObjectInitializer& ObjectInitializer);

};

