#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_ParkingVisualDebug.generated.h"

UCLASS(Blueprintable)
class BF_AI_API AIGS_ParkingVisualDebug : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ParentDestination;
    
    AIGS_ParkingVisualDebug(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CheckIfStillValid();
    
};

