#pragma once
#include "CoreMinimal.h"
#include "IGS_PingablePair.generated.h"

class AActor;
class UIGS_PingableComponent;

USTRUCT(BlueprintType)
struct FIGS_PingablePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Pingable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PingableComponent* PingableComponent;
    
    BF_FRAMEWORKGAME_API FIGS_PingablePair();
};

