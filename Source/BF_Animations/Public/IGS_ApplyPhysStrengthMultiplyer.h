#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "IGS_ApplyPhysStrengthMultiplyer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_ApplyPhysStrengthMultiplyer : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsStrengthMultiplyer;
    
    UIGS_ApplyPhysStrengthMultiplyer();

};

