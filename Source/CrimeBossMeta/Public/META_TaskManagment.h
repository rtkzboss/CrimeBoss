#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_TaskManagment.generated.h"

class UMETA_TaskCondition;

UINTERFACE(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TaskManagment : public UInterface {
    GENERATED_BODY()
};

class CRIMEBOSSMETA_API IMETA_TaskManagment : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTasks(UPARAM(Ref) TArray<UMETA_TaskCondition*>& inTasks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveTask(UMETA_TaskCondition* inTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMETA_TaskCondition*> GetAssignedTasks();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddTask(UMETA_TaskCondition* inTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddFinishedInnerTask(UMETA_TaskCondition* inFinishedInnerTask);
    
};

