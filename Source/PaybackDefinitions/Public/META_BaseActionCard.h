#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMETA_ActionCardStrength.h"
#include "META_ActionCard.h"
#include "META_BaseActionCard.generated.h"

class AGameModeBase;

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_BaseActionCard : public UObject, public IMETA_ActionCard {
    GENERATED_BODY()
public:
    UMETA_BaseActionCard();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetValues(EMETA_ActionCardStrength Strength, TArray<int32>& Values);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteActionCard(AGameModeBase* inGameMode, EMETA_ActionCardStrength Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeExecuteActionCard(AGameModeBase* inGameMode, EMETA_ActionCardStrength Strength);
    

    // Fix for true pure virtual functions not being implemented
};

