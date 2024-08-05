#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_RoomFramework.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API AIGS_RoomFramework : public AActor {
    GENERATED_BODY()
public:
    AIGS_RoomFramework(const FObjectInitializer& ObjectInitializer);

};

