#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_Action.generated.h"

class AMETA_BaseGameMode;

UINTERFACE(Blueprintable)
class CRIMEBOSSMETA_API UMETA_Action : public UInterface {
    GENERATED_BODY()
};

class CRIMEBOSSMETA_API IMETA_Action : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteAction(AMETA_BaseGameMode* inGameMode);
    
};

