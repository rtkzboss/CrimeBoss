#pragma once
#include "CoreMinimal.h"
#include "META_BaseGraphComponent.h"
#include "META_Condition.h"
#include "META_BaseCondition.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseCondition : public UMETA_BaseGraphComponent, public IMETA_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertResult;
    
    UMETA_BaseCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteCondition(AMETA_BaseGameMode* inGameMode);
    

    // Fix for true pure virtual functions not being implemented
};

