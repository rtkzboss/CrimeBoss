#pragma once
#include "CoreMinimal.h"
#include "OnMoveLeftLinkDelegate.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoveLeftLink, const UIGS_NavLinkComponentFramework*, ThisComp, const AIGS_GameCharacterFramework*, Pawn);

