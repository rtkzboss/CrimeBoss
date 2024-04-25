#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenericGraphNode_ErrorData.h"
#include "META_GraphComponent.h"
#include "META_BaseGraphComponent.generated.h"

class AMETA_BaseGameMode;
class UGenericGraphNode;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_BaseGraphComponent : public UObject, public IMETA_GraphComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericGraphNode* OwnerNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlreadyActivated;
    
    UMETA_BaseGraphComponent();

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
    

    // Fix for true pure virtual functions not being implemented
};

