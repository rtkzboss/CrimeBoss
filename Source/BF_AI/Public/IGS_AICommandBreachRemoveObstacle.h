#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBreachRemoveObstacle.generated.h"

class AActor;
class AIGS_BreachExplodable;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBreachRemoveObstacle : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BreachableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_BreachExplodable* ExplosiveObject;
    
    UIGS_AICommandBreachRemoveObstacle();

};

