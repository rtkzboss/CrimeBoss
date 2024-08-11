#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_UGCMenuActor.generated.h"

UCLASS(Blueprintable)
class CRIMEBOSSUGC_API AIGS_UGCMenuActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_UGCMenuActor(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void BeginPlay() override;
};

