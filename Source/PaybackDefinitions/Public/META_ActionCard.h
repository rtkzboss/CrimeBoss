#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMETA_ActionCardStrength.h"
#include "META_ActionCard.generated.h"

class AGameModeBase;

UINTERFACE(Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_ActionCard : public UInterface {
    GENERATED_BODY()
};

class PAYBACKDEFINITIONS_API IMETA_ActionCard : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteActionCard(AGameModeBase* inGameMode, EMETA_ActionCardStrength Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeExecuteActionCard(AGameModeBase* inGameMode, EMETA_ActionCardStrength Strength);
    
};

