#pragma once
#include "CoreMinimal.h"
#include "OnMoveReachedLinkDelegate.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_NavLinkComponentFramework;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMoveReachedLink, const UIGS_NavLinkComponentFramework*, ThisComp, const AIGS_GameCharacterFramework*, Pawn, bool, IsRight);

