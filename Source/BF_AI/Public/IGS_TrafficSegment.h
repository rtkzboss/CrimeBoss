#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_TrafficSegment.generated.h"

class UIGS_TrafficPathComponent;

UCLASS(Blueprintable)
class BF_AI_API AIGS_TrafficSegment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_TrafficPathComponent* PathComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Hidden;
    
    AIGS_TrafficSegment(const FObjectInitializer& ObjectInitializer);

};

