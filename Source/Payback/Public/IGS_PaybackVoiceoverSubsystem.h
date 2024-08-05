#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_PaybackVoiceoverSubsystem.generated.h"

class AIGS_GlobalDialoguePlayer;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PaybackVoiceoverSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GlobalDialoguePlayer* GlobalDialoguePlayer;
    
public:
    UIGS_PaybackVoiceoverSubsystem();

};

