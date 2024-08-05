#pragma once
#include "CoreMinimal.h"
#include "OnFirstUseRequestDelegate.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFirstUseRequest, const UIGS_NavLinkComponentBase*, ThisComp, const AIGS_GameCharacterFramework*, Pawn);

