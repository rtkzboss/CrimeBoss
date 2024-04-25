#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepsBaseComponent.h"
#include "IGS_FootstepsDistanceBasedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FootstepsDistanceBasedComponent : public UIGS_FootstepsBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchStepLength;
    
public:
    UIGS_FootstepsDistanceBasedComponent(const FObjectInitializer& ObjectInitializer);

};

