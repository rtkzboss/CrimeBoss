#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentBase.h"
#include "IGS_PlayObjectAnimationDelegateDelegate.h"
#include "IGS_AnimatedInteractiveComponentSimple.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_AnimatedInteractiveComponentSimple : public UIGS_AnimatedInteractiveComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayObjectAnimationDelegate OnPlayObjectAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ObjectMontageToPlay;
    
    UIGS_AnimatedInteractiveComponentSimple(const FObjectInitializer& ObjectInitializer);

};

