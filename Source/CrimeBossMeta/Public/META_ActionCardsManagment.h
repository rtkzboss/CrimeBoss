#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_ActionCardGraph.h"
#include "META_ActionCardsManagment.generated.h"

UINTERFACE(Blueprintable)
class CRIMEBOSSMETA_API UMETA_ActionCardsManagment : public UInterface {
    GENERATED_BODY()
};

class CRIMEBOSSMETA_API IMETA_ActionCardsManagment : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelectedActionCardNumber(int32 inChosenCardNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActionCards(UPARAM(Ref) TArray<FMETA_ActionCardGraph>& inActionCards);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSelectedActionCardNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FMETA_ActionCardGraph> GetActionCards();
    
};

