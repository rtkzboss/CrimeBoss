#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_Condition.generated.h"

class AMETA_BaseGameMode;

UINTERFACE(Blueprintable)
class CRIMEBOSSMETA_API UMETA_Condition : public UInterface {
    GENERATED_BODY()
};

class CRIMEBOSSMETA_API IMETA_Condition : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteCondition(AMETA_BaseGameMode* inGameMode);
    
};

