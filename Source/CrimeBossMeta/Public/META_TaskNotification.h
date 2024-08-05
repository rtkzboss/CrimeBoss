#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_TaskNotification.generated.h"

class UMETA_BaseGoal;
class UMETA_TaskCondition;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_TaskNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseGoal* m_Goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_TaskCondition* m_Task;
    
public:
    UMETA_TaskNotification();

    UFUNCTION(BlueprintCallable)
    void SetTaskAndGoal(UMETA_TaskCondition* inTask, UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_TaskCondition* GetTask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseGoal* GetGoal() const;
    
};

