#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactBase.h"
#include "IGS_SoundImpact.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class BF_IMPACTS_API AIGS_SoundImpact : public AIGS_ImpactBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
public:
    AIGS_SoundImpact(const FObjectInitializer& ObjectInitializer);

};

