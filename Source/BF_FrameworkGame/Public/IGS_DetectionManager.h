#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_DetectionManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_DetectionManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Detectors;
    
public:
    UIGS_DetectionManager();

};

