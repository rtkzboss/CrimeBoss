#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_NavHintVolume.generated.h"

class AIGS_Splitter;

UCLASS(Blueprintable)
class BF_AI_API AIGS_NavHintVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_Splitter*> ExclusiveEntrances;
    
public:
    AIGS_NavHintVolume(const FObjectInitializer& ObjectInitializer);

};

