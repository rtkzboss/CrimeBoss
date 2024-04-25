#pragma once
#include "CoreMinimal.h"
#include "IGS_ShooterBase.h"
#include "IGS_ContinuousShooter.generated.h"

class AIGS_ProjectileContinuous;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ContinuousShooter : public UIGS_ShooterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIGS_ProjectileContinuous* m_ActiveProjectile;
    
public:
    UIGS_ContinuousShooter(const FObjectInitializer& ObjectInitializer);

};

