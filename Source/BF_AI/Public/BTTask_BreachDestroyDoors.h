#pragma once
#include "CoreMinimal.h"
#include "BTTask_BreachDestroyPlaceExplosiveBase.h"
#include "BTTask_BreachDestroyDoors.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterBase;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_BreachDestroyDoors : public UBTTask_BreachDestroyPlaceExplosiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_AIControllerGame* m_Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterBase* m_Character;
    
public:
    UBTTask_BreachDestroyDoors();

};

