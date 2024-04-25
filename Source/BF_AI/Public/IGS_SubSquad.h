#pragma once
#include "CoreMinimal.h"
#include "IGS_SubSquad.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_SubSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* Leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* LeaderCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* Backup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* BackUpCommand;
    
    FIGS_SubSquad();
};

