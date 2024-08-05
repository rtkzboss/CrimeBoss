#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PlayerStartGroup.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerStartGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRandom;
    
    AIGS_PlayerStartGroup(const FObjectInitializer& ObjectInitializer);

};

