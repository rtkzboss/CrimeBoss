#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_GraphNode.generated.h"

class AMETA_BaseGameMode;

UINTERFACE(Blueprintable)
class UMETA_GraphNode : public UInterface {
    GENERATED_BODY()
};

class IMETA_GraphNode : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetNodeToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 ExecuteNode(AMETA_BaseGameMode* inGameMode);
    
};

