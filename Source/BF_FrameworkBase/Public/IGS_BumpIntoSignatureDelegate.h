#pragma once
#include "CoreMinimal.h"
#include "IGS_BumpIntoSignatureDelegate.generated.h"

class AIGS_GameCharacterFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_BumpIntoSignature, AIGS_GameCharacterFramework*, inBumpinChar);

