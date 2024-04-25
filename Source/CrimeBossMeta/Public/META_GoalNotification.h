#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_GoalNotification.generated.h"

class UMETA_BaseGoal;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_GoalNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMETA_BaseGoal* m_Goal;
    
public:
    UMETA_GoalNotification();

    UFUNCTION(BlueprintCallable)
    void SetGoal(UMETA_BaseGoal* inGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseGoal* GetGoal() const;
    
};

