#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnZiptyingStartedSignatureDelegate.h"
#include "IGS_WeaponAnimationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_ANIMATIONS_API UIGS_WeaponAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnZiptyingStartedSignature OnZiptyingStarted;
    
    UIGS_WeaponAnimationComponent(const FObjectInitializer& ObjectInitializer);

};

