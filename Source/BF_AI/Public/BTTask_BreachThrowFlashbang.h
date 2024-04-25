#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Templates/SubclassOf.h"
#include "BTTask_BreachThrowFlashbang.generated.h"

class AIGS_AIControllerGame;
class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_BreachThrowFlashbang : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> FlashGrenadeClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AIControllerGame* m_Controller;
    
public:
    UBTTask_BreachThrowFlashbang();

};

