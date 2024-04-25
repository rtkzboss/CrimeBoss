#pragma once
#include "CoreMinimal.h"
#include "IGS_BreachInterface.h"
#include "IGS_NavLinksBreachInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_NavLinksBreachInterface : public UIGS_BreachInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_NavLinksBreachInterface : public IIGS_BreachInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNavLinkCount();
    
};

