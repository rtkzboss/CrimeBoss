#pragma once
#include "CoreMinimal.h"
#include "META_Action.h"
#include "META_BaseGraphComponent.h"
#include "META_BaseAction.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseAction : public UMETA_BaseGraphComponent, public IMETA_Action {
    GENERATED_BODY()
public:
    UMETA_BaseAction();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteAction(AMETA_BaseGameMode* inGameMode);
    

    // Fix for true pure virtual functions not being implemented
};

