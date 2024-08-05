#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBeingRevived.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_AI_API UIGS_AICommandBeingRevived : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* RevivedByCharacter;
    
    UIGS_AICommandBeingRevived();

};

