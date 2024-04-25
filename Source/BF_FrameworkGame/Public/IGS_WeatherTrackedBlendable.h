#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_WeatherTrackedBlendable.generated.h"

class UIGS_PostProcessManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeatherTrackedBlendable : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_PostProcessManagerComponent> m_PostProcessManager;
    
public:
    UIGS_WeatherTrackedBlendable(const FObjectInitializer& ObjectInitializer);

};

