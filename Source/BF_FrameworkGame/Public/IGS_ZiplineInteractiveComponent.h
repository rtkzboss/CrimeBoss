#pragma once
#include "CoreMinimal.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_ZiplineFinishedDelegate.h"
#include "IGS_ZiplineInteractiveComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ZiplineInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SlideUp;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ZiplineFinished OnZiplineAIFinished;
    
public:
    UIGS_ZiplineInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Use(AIGS_GameCharacterFramework* inInstigator);
    
};

