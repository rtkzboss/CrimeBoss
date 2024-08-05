#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SquadSpeedSynchronizationComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SquadSpeedSynchronizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AIGS_GameCharacterFramework*, float> NextSpeedChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TmpDistanceToDestination;
    
public:
    UIGS_SquadSpeedSynchronizationComponent(const FObjectInitializer& ObjectInitializer);

};

