#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommandFinishedDelegateDelegate.generated.h"

class AIGS_AIControllerGame;
class UIGS_AICommand;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FIGS_AICommandFinishedDelegate, AIGS_AIControllerGame*, inOwningContoller, UIGS_AICommand*, inCommand, bool, inFailed);

