#pragma once
#include "CoreMinimal.h"
#include "IGS_ShoutAtRecord.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_ShoutAtRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* Character;
    
    FIGS_ShoutAtRecord();
};

