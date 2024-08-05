#pragma once
#include "CoreMinimal.h"
#include "META_BaseGraphComponent.h"
#include "META_MediaCondition.generated.h"

class AMETA_BaseGameMode;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MediaCondition : public UMETA_BaseGraphComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* CachedGameMode;
    
public:
    UMETA_MediaCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetResultsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEdgeResultText(uint8 inResultID);
    
};

