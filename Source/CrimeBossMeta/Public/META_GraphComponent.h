#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GenericGraphNode_ErrorData.h"
#include "META_GraphComponent.generated.h"

class AMETA_BaseGameMode;
class UGenericGraphNode;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_GraphComponent : public UInterface {
    GENERATED_BODY()
};

class IMETA_GraphComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartSetUp(AMETA_BaseGameMode* inGameMode, UGenericGraphNode* inOwnerNode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetToDefault(bool inForceReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsComponentValid(UGenericGraphNode* inNodeEditor, TArray<FGenericGraphNode_ErrorData>& outErrorsData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesContainClass(UClass* inClass, bool inNeedCheckAsChild);
    
};

