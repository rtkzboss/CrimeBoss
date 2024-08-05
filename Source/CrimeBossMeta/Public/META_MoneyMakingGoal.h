#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseGoal.h"
#include "META_MoneyMakingGoalData.h"
#include "META_TaskManagment.h"
#include "META_MoneyMakingGoal.generated.h"

UCLASS(Abstract, Blueprintable)
class CRIMEBOSSMETA_API UMETA_MoneyMakingGoal : public UMETA_BaseGoal, public IMETA_TaskManagment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_MoneyMakingGoalData m_Goal;
    
public:
    UMETA_MoneyMakingGoal();

    UFUNCTION(BlueprintCallable)
    void SetMonetaryValue(int32 inMonetaryValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMonetaryValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLootType();
    

    // Fix for true pure virtual functions not being implemented
};

